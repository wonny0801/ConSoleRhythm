#include "include.h"

GameState::GameState()
{
	CreateEnemyCoolTime = 0;
	srand(time(0));
	gametime.gameTime = 61;
	GameMng::Getles()->score.init();
	
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

	if (!gamePlayTimeCheck())
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
		CreateEnemyCoolTime = GetTickCount() + (rand() % (GameMng::Getles()->player.Level)) +
			GameMng::Getles()->player.Level;
		CreateEnemy();
	}
	smash();
	miss();
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
				break;
			}
		}
	}
}

void GameState::miss()
{
	if (GameMng::Getles()->player.Level < 500)
	{
		for (int i = 0; i < D_ENEMY_MAX; i++)
		{
			if (enemys[i].isAlive)
			{
				if (enemys[i].x < GameMng::Getles()->player.x - 3)
				{
					enemys[i].Disable();
					GameMng::Getles()->score.ScoreMinus();
				}
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


