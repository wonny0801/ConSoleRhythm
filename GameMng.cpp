#include "include.h"

GameMng::GameMng()
{
	

	statectrl.StateAdd(E_MENU, new MenuState());
	statectrl.StateAdd(E_GAME, new GameState());

	statectrl.StateChange(E_MENU);
}

GameMng::~GameMng()
{
}

void GameMng::Update()
{
	statectrl.Update();

	/*player.Update();
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
	gametime.Update();*/
}

void GameMng::Draw()
{
	statectrl.Draw();

	/*player.Draw();
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		enemys[i].Draw();
	}
	score.Draw();
	gametime.Draw();*/
}


