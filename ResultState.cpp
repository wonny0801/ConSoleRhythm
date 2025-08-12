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
		DrawStr(43, 13, "�Ϳ�~!!! ��û�� �Ƿ��ڱ���!! ����ؿ�^^", WHITE, BLACK);
		DrawStr(43, 15, GameMng::Getles()->score.body.c_str(),
			GameMng::Getles()->score.fColor, GameMng::Getles()->score.bColor);
		break;
	case 9:
	case 8:
		DrawStr(43, 13, "��!! ����Ͻŵ���? �߹��� �Ƿ��̿���!!", WHITE, BLACK);
		DrawStr(43, 15, GameMng::Getles()->score.body.c_str(),
			GameMng::Getles()->score.fColor, GameMng::Getles()->score.bColor);
		break;
	case 7:
	case 6:
		DrawStr(43, 13, "����~ ������ �ʱ���! ���� �� ����غ�����~", WHITE, BLACK);
		DrawStr(43, 15, GameMng::Getles()->score.body.c_str(),
			GameMng::Getles()->score.fColor, GameMng::Getles()->score.bColor);
		break;
	case 5:
	case 4:
		DrawStr(43, 13, "�� ���� �ʺ��ΰ�����~ �ܿ� �� ����...?", WHITE, BLACK);
		DrawStr(43, 15, GameMng::Getles()->score.body.c_str(),
			GameMng::Getles()->score.fColor, GameMng::Getles()->score.bColor);
		break;
	case 3:
	case 2:
		DrawStr(43, 13, "Ǫ��~!! ������ �ܿ� �� ������...? �f��", WHITE, BLACK);
		DrawStr(43, 15, GameMng::Getles()->score.body.c_str(),
			GameMng::Getles()->score.fColor, GameMng::Getles()->score.bColor);
		break;
	default:
		DrawStr(43, 13, "�������� �׳� �ٸ� ������ �Ͻô°�... ũ�줻", WHITE, BLACK);
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
