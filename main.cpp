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
	/*while (((GameState*)GameMng::Getles()->statectrl.m_pCurState)->gamePlayTimeCheck())
	{
		Update();
		Draw();

		EngineSync(30);
	}*/
	while (true)
	{
		Update();
		Draw();

		EngineSync(30);
		
	}
     
	Release();

	return 0;
}
//TODO
// 1. ���̵� ���� ����...
//2. ���� ���ȭ�鿡�� ��Ʈ �پ��ϰ� ����...
//3. ���ȭ�鿡�� ����� ��� �����...
//4. Ÿ�� �̽� �� ���� ���� (�߼����̵� �̻�)