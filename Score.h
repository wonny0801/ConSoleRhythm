#pragma once



class Score : public Unit
{
public:
	Score();
	~Score();

	
	std::string BlueBody;
	std::string RedBody;
	std::string GreenBody;
	std::string YellowBody;

	int GameScore;
	//char body[50];
	std::string body;

	void init();
	void ScorePlus();
	void ScoreMinus();
	void Update();
	void Draw();
};
