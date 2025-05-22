#pragma once
class GameMng
{
public:
	GameMng();
	~GameMng();

	int CreateEnemyCoolTime;

	Player player;
	Enemy enemys[D_ENEMY_MAX];
	Score score;
	GameTime gametime;

	void Update();
	void Draw();

	void CreateEnemy();

	void smash();
	bool gamePlayTimeCheck();
};
	
extern GameMng gamemng;
