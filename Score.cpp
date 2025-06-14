#include "include.h"



Score::Score()
{
	x = 1;
	y = 1;
	fColor = WHITE;
	bColor = BLACK;
	isAlive = true;
	GameScore = 0;

	//sprintf_s(body, "SCORE : %d", GameScore); // 예시 1...
	//body.assign("SCORE :" + std::to_string(GameScore)); // 예시 2...
	/*std::ostringstream os;
	os << "hi~";
	score.body = os.str();*/
	body = "SCORE : " + std::to_string(GameScore);
	BlueBody = "D = 파랑~";
	RedBody = "F = 빨강~";
	GreenBody = "J = 초록~";
	YellowBody = "K = 노랑~";
	
}

Score::~Score()
{
}

void Score::ScorePlus()
{
	GameScore += 10; // 스코어 증가 (예: 10점 추가)
	//sprintf_s(body, sizeof(body), "SCORE : %d", GameScore); // 문자열 업데이트
	//body.assign("SCORE : %d", GameScore);

	

	body.assign("SCORE :" + std::to_string(GameScore));
}

void Score::Update()
{
}

void Score::Draw()
{
	if (isAlive)
	{
		DrawStr(x, y, body.c_str(), fColor, bColor);
		DrawStr(5, 5, BlueBody.c_str(), INTENSITY_BLUE, bColor);
		DrawStr(18, 5, RedBody.c_str(), RED, bColor);
		DrawStr(31, 5, GreenBody.c_str(), GREEN, bColor);
		DrawStr(44, 5, YellowBody.c_str(), YELLOW, bColor);
	}
		

	// .c_str() : string을 char[]로 형태변환 해주는 함수...
}
