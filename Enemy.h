#pragma once
class Enemy : public Unit
{
public:
	Enemy();
	~Enemy();

	int ColorNumber;

	void Update() override;
	void Draw() override;

	void move();
	void Clipping();

	void Enable(int x, int y) override;


};
