#include "include.h"

GameState::GameState()
{
	CreateEnemyCoolTime = 0;
	srand(time(0));
}

GameState::~GameState()
{
}

void GameState::Start()
{
}

void GameState::Update()
{
	if (GetAsyncKeyState(VK_F2))
	{
		GameMng::Getles()->statectrl.StateChange(new MenuState);
	}

	if (((GameState*)GameMng::Getles()->statectrl.m_pCurState)->gamePlayTimeCheck())
	{
		GameMng::Getles()->statectrl.StateChange(new ResultState);
	}
	GameMng::Getles()->player.Update();
	
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		enemys[i].Update();
	}
	if (CreateEnemyCoolTime < GetTickCount())
	{
		CreateEnemyCoolTime = GetTickCount() + (rand() % 300) +
			GameMng::Getles()->player.Level;
		CreateEnemy();
	}
	smash();
	GameMng::Getles()->score.Update();
	gametime.Update();
}

void GameState::Draw()
{
	//DrawStr(10, 10, "GameState", WHITE, BLACK);
	GameMng::Getles()->player.Draw();
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		enemys[i].Draw();
	}
	GameMng::Getles()->score.Draw();
	gametime.Draw();
}

void GameState::Exit()
{
	
}

void GameState::CreateEnemy()
{
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		if (enemys[i].isAlive == false)
		{
			enemys[i].Enable(120, 15);
			break;
		}
	}
}

void GameState::smash()
{
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		if (enemys[i].isAlive)
		{
			if ((GameMng::Getles()->player.x == enemys[i].x 
				|| GameMng::Getles()->player.x + 1 == enemys[i].x) 
				&& GameMng::Getles()->player.fColor == enemys[i].fColor)
			{
				enemys[i].Disable();
				GameMng::Getles()->score.ScorePlus();
			}
		}
	}
}

bool GameState::gamePlayTimeCheck()
{
	if (gametime.gameTime <= 0)
		return false;

	return true;
}


