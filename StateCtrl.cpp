#include "Include.h"


CStateCtrl::CStateCtrl()
{
}

CStateCtrl::~CStateCtrl()
{
}

//bool CStateCtrl::StateAdd(int nIndex, CState* pState)
//{
//	if (m_pStates[nIndex] == NULL)
//	{
//		m_pStates[nIndex] = pState;
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//bool CStateCtrl::StateRelease(int nIndex)
//{
//	if (m_pStates[nIndex] != NULL)
//	{
//		//delete m_pStates[nIndex];
//		m_pStates[nIndex] = NULL;
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

bool CStateCtrl::StateChange(CState* newState)
{
	CState* pState = newState;

	if (pState != NULL)
	{
		if (m_pCurState != NULL)
		{
			m_pCurState->Exit();
		}
		temp = newState;
		return true;
	}
	else
	{
		return false;
	}
}

void CStateCtrl::Update()
{
	if (m_pCurState != NULL)
	{
		m_pCurState->Update();	
	}
	if (temp != nullptr)
	{
		if (m_pCurState != nullptr)
		{
			delete m_pCurState;
		}
		m_pCurState = temp;
		m_pCurState->Start();
		temp = nullptr;
	}
}

void CStateCtrl::Draw()
{
	if (m_pCurState != NULL)
	{
		m_pCurState->Draw();
	}
}



