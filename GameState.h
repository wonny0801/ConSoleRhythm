#pragma once
class GameState : public CState
{
public:
	GameState();
	~GameState();

	

	int CreateEnemyCoolTime;

	
	GameTime gametime;
	Enemy enemys[D_ENEMY_MAX];
	void Start() override;
	void Update() override;
	void Draw() override;
	void Exit() override;

	void CreateEnemy();

	void smash();
	bool gamePlayTimeCheck();

	

};
