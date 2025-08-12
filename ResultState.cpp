#include "include.h"

ResultState::ResultState()
{
	resultScore = GameMng::Getles()->score.GameScore / 100;
}

ResultState::~ResultState()
{
}

void ResultState::Start()
{
}

void ResultState::Update()
{
	if (GetAsyncKeyState(VK_F5))
	{
		GameMng::Getles()->statectrl.StateChange(new MenuState);
	}
}

void ResultState::Draw()
{
	switch (resultScore)
	{
	case 10:
		DrawStr(43, 13, "와우~!!! 엄청난 실력자군요!! 대단해요^^", WHITE, BLACK);
		DrawStr(43, 15, GameMng::Getles()->score.body.c_str(),
			GameMng::Getles()->score.fColor, GameMng::Getles()->score.bColor);
		break;
	case 9:
	case 8:
		DrawStr(43, 13, "헐!! 대단하신데요? 야무진 실력이에요!!", WHITE, BLACK);
		DrawStr(43, 15, GameMng::Getles()->score.body.c_str(),
			GameMng::Getles()->score.fColor, GameMng::Getles()->score.bColor);
		break;
	case 7:
	case 6:
		DrawStr(43, 13, "으음~ 나쁘지 않군요! 조금 더 노력해보세요~", WHITE, BLACK);
		DrawStr(43, 15, GameMng::Getles()->score.body.c_str(),
			GameMng::Getles()->score.fColor, GameMng::Getles()->score.bColor);
		break;
	case 5:
	case 4:
		DrawStr(43, 13, "흠 아직 초보인가봐요~ 겨우 그 정도...?", WHITE, BLACK);
		DrawStr(43, 15, GameMng::Getles()->score.body.c_str(),
			GameMng::Getles()->score.fColor, GameMng::Getles()->score.bColor);
		break;
	case 3:
	case 2:
		DrawStr(43, 13, "푸핫~!! 점수가 겨우 그 정도야...? 킼ㅋ", WHITE, BLACK);
		DrawStr(43, 15, GameMng::Getles()->score.body.c_str(),
			GameMng::Getles()->score.fColor, GameMng::Getles()->score.bColor);
		break;
	default:
		DrawStr(43, 13, "이정도면 그냥 다른 게임을 하시는게... 크흠ㅋ", WHITE, BLACK);
		DrawStr(43, 15, GameMng::Getles()->score.body.c_str(),
			GameMng::Getles()->score.fColor, GameMng::Getles()->score.bColor);
		break;
	}

	DrawStr(50, 25, "press F5 : reStart !! ", BLUE, BLACK);
}

void ResultState::Exit()
{
}

void ResultState::TimeOver()
{
	

}
