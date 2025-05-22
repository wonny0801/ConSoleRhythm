#include "include.h"

Player::Player()
{
	x = 10;
	y = 15;
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
	if (GetAsyncKeyState('D') & 0x8000)
	{
		Blue();
	}
	if (GetAsyncKeyState('F') & 0x8000)
	{
		Red();
	}
	if (GetAsyncKeyState('J') & 0x8000)
	{
		Green();
	}
	if (GetAsyncKeyState('K') & 0x8000)
	{
		Yellow();
	}
}

void Player::Draw()
{
	if(isAlive)
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

void Player::Blue()
{
	fColor = INTENSITY_BLUE;
}

