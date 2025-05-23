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
	if (GetAsyncKeyState(VK_F1))
	{
		GameMng::Getles()->statectrl.StateChange(E_GAME);
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
	DrawStr(10, 13, "�غ� �Ǽ̳���~ F1�� ������ ������ �����մϴپ�~", WHITE, BLACK);
}

void MenuState::Exit()
{
}
