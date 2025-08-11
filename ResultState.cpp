#include "include.h"

ResultState::ResultState()
{
}

ResultState::~ResultState()
{
}

void ResultState::Start()
{
}

void ResultState::Update()
{
	TimeOver();
}

void ResultState::Draw()
{
}

void ResultState::Exit()
{
}

void ResultState::TimeOver()
{
	switch (GameMng::Getles()->score.GameScore / 100)
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

}
