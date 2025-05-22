#include "include.h"

GameMng::GameMng()
{
	CreateEnemyCoolTime = 0;
	srand(time(0));
}

GameMng::~GameMng()
{
}

void GameMng::Update()
{
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

void GameMng::Draw()
{
	player.Draw();
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		enemys[i].Draw();
	}
	score.Draw();
	gametime.Draw();
}

void GameMng::CreateEnemy()
{
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		if (enemys[i].isAlive == false)
		{
			enemys[i].Enable(120, 29);
			break;
		}
	}
}

void GameMng::smash()
{
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		if (enemys[i].isAlive)
		{
			if (player.x == enemys[i].x && player.fColor == enemys[i].fColor)
			{
				enemys[i].Disable();
				score.ScorePlus();
			}
		}
	}
}

bool GameMng::gamePlayTimeCheck()
{
	if (gametime.gameTime <= 0)
		return false;

	return true;
}

void GameMng::TimeOver()
{
	DrawStr(55, 15, score.body.c_str(), score.fColor, score.bColor);
}
