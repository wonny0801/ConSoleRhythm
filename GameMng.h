#pragma once
class GameMng : public Singleton<GameMng>
{
public:
	GameMng();
	~GameMng();
	
	CStateCtrl statectrl;

	Player player;

	Score score;

	void Update();
	void Draw();

	
};
	

