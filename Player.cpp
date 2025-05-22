#include "include.h"

Player::Player()
{
	x = 3;
	y = 29;
	body = 'R';
	fColor = WHITE;
	bColor = BLACK;
	isAlive = true;

}

Player::~Player()
{
}

void Player::Update()
{
	if (GetAsyncKeyState('Q') & 0x8000)
	{
		White();
	}
	if (GetAsyncKeyState('W') & 0x8000)
	{
		Red();
	}
	if (GetAsyncKeyState('E') & 0x8000)
	{
		Green();
	}
	if (GetAsyncKeyState('R') & 0x8000)
	{
		Yellow();
	}
}

void Player::Draw()
{
	DrawChar(x, y, body, fColor, bColor);
}

void Player::Red()
{
	fColor = RED;
}

void Player::Green()
{
	fColor = GREEN;
}

void Player::Yellow()
{
	fColor = YELLOW;
}

void Player::White()
{
	fColor = WHITE;
}

