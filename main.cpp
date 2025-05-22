#include "include.h"

int main()
{
	Init();

	/*while (true)
	{
		Update();
		Draw();

		EngineSync(30);
	}*/
	while (((GameState*)GameMng::Getles()->statectrl.m_pStates[E_GAME])->gamePlayTimeCheck())
	{
		Update();
		Draw();

		EngineSync(30);
	}
	while (true)
	{
		GameOverDraw();
	}

	Release();

	return 0;
}