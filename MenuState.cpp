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
	if (GetAsyncKeyState('Q'))//왕초보
	{
		GameMng::Getles()->player.Level = 1000;
		GameMng::Getles()->statectrl.StateChange(new GameState);
	}
	if (GetAsyncKeyState('W'))//초보
	{
		GameMng::Getles()->player.Level = 750;
		GameMng::Getles()->statectrl.StateChange(new GameState);
	}
	if (GetAsyncKeyState('E'))//중수
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
	DrawStr(10, 6, "금냥이가~ 좋아하는~ 리듬~게임!! 리듬~게임!!", WHITE, BLACK);
	DrawStr(10, 8, "날아오는 적들의 색깔에 맞춰 플레이어의 색을 바꾸면 됩니당~", WHITE, BLACK);
	DrawStr(10, 9, "D를 누르면 파란색!!!", INTENSITY_BLUE, BLACK);
	DrawStr(10, 10, "F를 누르면 빨간색!!!", RED, BLACK);
	DrawStr(10, 11, "J를 누르면 초록색!!!", GREEN, BLACK);
	DrawStr(10,12, "K를 누르면 노란색!!!", YELLOW, BLACK);
	DrawStr(50, 16, "난이도를 선택해주세요!!", RED, BLACK);
	DrawStr(50, 18, "press Q : 왕초보", WHITE, BLACK);
	DrawStr(50, 20, "press W : 초보", WHITE, BLACK);
	DrawStr(50, 22, "press E : 중수", WHITE, BLACK);
	DrawStr(50, 24, "press R : 고수", WHITE, BLACK);
	DrawStr(50, 26, "press T : 불가능", WHITE, BLACK);

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
