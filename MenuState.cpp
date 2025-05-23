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
	DrawStr(10, 6, "금냥이가~ 좋아하는~ 리듬~게임!! 리듬~게임!!", WHITE, BLACK);
	DrawStr(10, 8, "날아오는 적들의 색깔에 맞춰 플레이어의 색을 바꾸면 됩니당~", WHITE, BLACK);
	DrawStr(10, 9, "D를 누르면 파란색!!!", INTENSITY_BLUE, BLACK);
	DrawStr(10, 10, "F를 누르면 빨간색!!!", RED, BLACK);
	DrawStr(10, 11, "J를 누르면 초록색!!!", GREEN, BLACK);
	DrawStr(10,12, "K를 누르면 노란색!!!", YELLOW, BLACK);
	DrawStr(10, 13, "준비 되셨나요~ F1을 누르면 게임을 시작합니다아~", WHITE, BLACK);
}

void MenuState::Exit()
{
}
