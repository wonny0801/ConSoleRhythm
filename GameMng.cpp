#include "include.h"

GameMng::GameMng()
{
	statectrl.StateChange(new MenuState);
}

GameMng::~GameMng()
{
}

void GameMng::Update()
{
	statectrl.Update();
}

void GameMng::Draw()
{
	statectrl.Draw();
}


