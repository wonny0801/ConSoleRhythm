#pragma once

class CStateCtrl
{
public:
	CState* m_pCurState;			// ���� state
	CState* temp;			// �� state

	//CState* m_pStates;
	
public:
	CStateCtrl();
	~CStateCtrl();

public:
	/*void Init();
	bool StateAdd(int nIndex, CState* pState);
	bool StateRelease(int nIndex);*/
	bool StateChange(CState* newState);

public:
	void Update();
	void Draw();
};