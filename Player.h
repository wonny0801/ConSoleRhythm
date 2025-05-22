#pragma once
class Player : public Unit
{
public:
	Player();
	~Player();

	
	void Update() override;
	void Draw() override;

	void Red();
	void Green();
	void Yellow();
	void White();
	void Blue();
};
