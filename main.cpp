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
// 1. 난이도 선택 가능하게 만들기...
//2. 게임 결과화면에서 멘트 다양하게 구현...
//3. 결과화면에서 재시작 기능 만들기...
//4. 구조 뜯어고치면서 생긴 여러 오류들 고치기...