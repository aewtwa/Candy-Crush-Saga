#include "pch.h"
#include "CTimeMgr.h"
#include "CCore.h"

CTimeMgr::CTimeMgr()
	: m_llCurcount{}
	, m_llPrevcount{}
	, m_llFrequency{}
	, m_dDT(0.f)
	, m_dAcc(0.f)
	, m_iCallCount(0)
	, m_iFPS(0)
{

}

CTimeMgr::~CTimeMgr()
{

}

void CTimeMgr::init()
{
	// 현재 카운트
	QueryPerformanceCounter(&m_llPrevcount);

	// 초당 카운트 횟수
	QueryPerformanceFrequency(&m_llFrequency);

}

void CTimeMgr::update()
{
	QueryPerformanceCounter(&m_llCurcount);

	// 이전 프레임의 카운팅과, 현재 프레임 카운팅 값의 차이를 구한다.
	m_dDT = (double)(m_llCurcount.QuadPart - m_llPrevcount.QuadPart) / (double)(m_llFrequency.QuadPart);

	// 이전 카운트 값을 현재 값으로 갱신 (다음번의 계산을 위해서)
	m_llPrevcount = m_llCurcount;

	++m_iCallCount;
	m_dAcc += m_dDT; // DT 누적

	if (m_dAcc >= 1.f)
	{
		m_iFPS = m_iCallCount;
		m_dAcc = 0.f;
		m_iCallCount = 0;

		wchar_t szBuffer[255] = {};
		swprintf_s(szBuffer, L"FPS : %d, DT : %f", m_iFPS, m_dDT);
		SetWindowText(CCore::GetInst()->GetMainHwnd(), szBuffer);
	}
}
