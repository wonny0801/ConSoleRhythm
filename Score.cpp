#include "include.h"



Score::Score()
{
	x = 1;
	y = 1;
	fColor = WHITE;
	bColor = BLACK;
	isAlive = true;
	GameScore = 0;

	//sprintf_s(body, "SCORE : %d", GameScore); // ���� 1...
	//body.assign("SCORE :" + std::to_string(GameScore)); // ���� 2...
	/*std::ostringstream os;
	os << "hi~";
	score.body = os.str();*/
	body = "SCORE : " + std::to_string(GameScore);
	BlueBody = "D = �Ķ�~";
	RedBody = "F = ����~";
	GreenBody = "J = �ʷ�~";
	YellowBody = "K = ���~";
	
}

Score::~Score()
{
}

void Score::ScorePlus()
{
	GameScore += 10; // ���ھ� ���� (��: 10�� �߰�)
	//sprintf_s(body, sizeof(body), "SCORE : %d", GameScore); // ���ڿ� ������Ʈ
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
		

	// .c_str() : string�� char[]�� ���º�ȯ ���ִ� �Լ�...
}
