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
		GameMng::Getles()->statectrl.StateChange(E_MENU);
	}
	player.Update();
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		enemys[i].Update();
	}
	if (CreateEnemyCoolTime < GetTickCount())
	{
		CreateEnemyCoolTime = GetTickCount() + (rand() % 400) + 200;
		CreateEnemy();
	}
	smash();
	score.Update();
	gametime.Update();
}

void GameState::Draw()
{
	//DrawStr(10, 10, "GameState", WHITE, BLACK);
	player.Draw();
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		enemys[i].Draw();
	}
	score.Draw();
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
			if ((player.x == enemys[i].x || player.x + 1 == enemys[i].x) && player.fColor == enemys[i].fColor)
			{
				enemys[i].Disable();
				score.ScorePlus();
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

void GameState::TimeOver()
{
	DrawStr(43, 13, "ÇªÇÖ~!! Á¡¼ö°¡ °Ü¿ì ±× Á¤µµ¾ß...? µf¤»", WHITE, BLACK);
	DrawStr(43, 15, score.body.c_str(), score.fColor, score.bColor);
}
