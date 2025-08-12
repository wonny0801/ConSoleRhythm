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
// 1. 난이도 선택 가능...
//2. 게임 결과화면에서 멘트 다양하게 구현...
//3. 결과화면에서 재시작 기능 만들기...
//4. 타일 미스 시 점수 깎임 (중수난이도 이상만)