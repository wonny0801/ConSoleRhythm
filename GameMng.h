#pragma once
class GameMng : public Singleton<GameMng>
{
public:
	GameMng();
	~GameMng();
	
	CStateCtrl statectrl;

	void Update();
	void Draw();

	
};
	

