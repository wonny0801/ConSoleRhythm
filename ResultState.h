#pragma once
class ResultState : public CState
{
public:
	ResultState();
	~ResultState();

	void Start() override;
	void Update() override;
	void Draw() override;
	void Exit() override;

	void TimeOver();
	int resultScore;
};
