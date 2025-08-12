#include "include.h"

MenuState::MenuState()
{
}

MenuState::~MenuState()
{
}

void MenuState::Start()
{
}

void MenuState::Update()
{
	if (GetAsyncKeyState('Q'))//���ʺ�
	{
		GameMng::Getles()->player.Level = 1000;
		GameMng::Getles()->statectrl.StateChange(new GameState);
	}
	if (GetAsyncKeyState('W'))//�ʺ�
	{
		GameMng::Getles()->player.Level = 750;
		GameMng::Getles()->statectrl.StateChange(new GameState);
	}
	if (GetAsyncKeyState('E'))//�߼�
	{
		GameMng::Getles()->player.Level = 500;
		GameMng::Getles()->statectrl.StateChange(new GameState);
	}
	if (GetAsyncKeyState('R'))
	{
		GameMng::Getles()->player.Level = 250;
		GameMng::Getles()->statectrl.StateChange(new GameState);
	}
	if (GetAsyncKeyState('T'))
	{
		GameMng::Getles()->player.Level = 150;
		GameMng::Getles()->statectrl.StateChange(new GameState);
	}
}

void MenuState::Draw()
{
	DrawStr(10, 6, "�ݳ��̰�~ �����ϴ�~ ����~����!! ����~����!!", WHITE, BLACK);
	DrawStr(10, 8, "���ƿ��� ������ ���� ���� �÷��̾��� ���� �ٲٸ� �˴ϴ�~", WHITE, BLACK);
	DrawStr(10, 9, "D�� ������ �Ķ���!!!", INTENSITY_BLUE, BLACK);
	DrawStr(10, 10, "F�� ������ ������!!!", RED, BLACK);
	DrawStr(10, 11, "J�� ������ �ʷϻ�!!!", GREEN, BLACK);
	DrawStr(10,12, "K�� ������ �����!!!", YELLOW, BLACK);
	DrawStr(50, 16, "���̵��� �������ּ���!!", RED, BLACK);
	DrawStr(50, 18, "press Q : ���ʺ�", WHITE, BLACK);
	DrawStr(50, 20, "press W : �ʺ�", WHITE, BLACK);
	DrawStr(50, 22, "press E : �߼�", WHITE, BLACK);
	DrawStr(50, 24, "press R : ���", WHITE, BLACK);
	DrawStr(50, 26, "press T : �Ұ���", WHITE, BLACK);

	DrawStr(48, 14, "                          ", INTENSITY_WHITE, INTENSITY_WHITE);
	DrawStr(48, 28, "                          ", INTENSITY_WHITE, INTENSITY_WHITE);

	for (int i = 14; i <= 28; i++)
	{
		DrawChar(47, i, ' ', INTENSITY_WHITE, INTENSITY_WHITE);
		DrawChar(48, i, ' ', INTENSITY_WHITE, INTENSITY_WHITE);
		DrawChar(74, i, ' ', INTENSITY_WHITE, INTENSITY_WHITE);
		DrawChar(75, i, ' ', INTENSITY_WHITE, INTENSITY_WHITE);
	}
}

void MenuState::Exit()
{
}
