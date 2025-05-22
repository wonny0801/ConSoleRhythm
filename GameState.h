#pragma once
class GameState : public CState
{
public:
	GameState();
	~GameState();

	

	int CreateEnemyCoolTime;

	Player player;
	Enemy enemys[D_ENEMY_MAX];
	Score score;
	GameTime gametime;

	void Start() override;
	void Update() override;
	void Draw() override;
	void Exit() override;

	void CreateEnemy();

	void smash();
	bool gamePlayTimeCheck();

	void TimeOver();

};
