#include "include.h"

Enemy::Enemy()
{
	fColor = WHITE;
	bColor = WHITE;
	ColorNumber = 0;
}

Enemy::~Enemy()
{
}

void Enemy::Update()
{
	move();
	Clipping();
}

void Enemy::Draw()
{
	if(isAlive)
		DrawChar(x, y, body, fColor, bColor);
}

void Enemy::move()
{
	x--;
}

void Enemy::Clipping()
{
	if (x < 0)
	{
		Disable();
	}
	
}

void Enemy::Enable(int x, int y)
{
	this->x = x;
	this->y = y;
	this->isAlive = true;
	ColorNumber = rand() % 4;

	switch (ColorNumber)
	{
	case 0:
		fColor = WHITE;
		bColor = WHITE;
		break;
	case 1:
		fColor = RED;
		bColor = RED;
		break;
	case 2:
		fColor = GREEN;
		bColor = GREEN;
		break;
	case 3:
		fColor = YELLOW;
		bColor = YELLOW;
		break;
	
	}
}
