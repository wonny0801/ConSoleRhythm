#pragma once
#include <stdio.h>
#include <Windows.h>	//win32 API
#include <time.h>
#include <string>
#include <sstream>
#include "Define.h"

#include "Singleton.h"

#include "Unit.h"

#include "State.h"
#include "StateCtrl.h"


#include "Player.h"
#include "Enemy.h"
#include "Score.h"
#include "GameTime.h"



#include "MenuState.h"
#include "GameState.h"

#include "GameMng.h"//관리자는 맨 밑에..

void Init();
void Update();
void Draw();
void Release();
void GameOverDraw();

void DrawStr(int x, int y, const char* str, WORD fcolor, WORD bcolor);
void DrawChar(int x, int y, const char c, WORD fcolor, WORD bcolor);
void EngineSync(int fps);
void ClearScreen();
void Flip();


