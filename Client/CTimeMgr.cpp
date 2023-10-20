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
	// ���� ī��Ʈ
	QueryPerformanceCounter(&m_llPrevcount);

	// �ʴ� ī��Ʈ Ƚ��
	QueryPerformanceFrequency(&m_llFrequency);

}

void CTimeMgr::update()
{
	QueryPerformanceCounter(&m_llCurcount);

	// ���� �������� ī���ð�, ���� ������ ī���� ���� ���̸� ���Ѵ�.
	m_dDT = (double)(m_llCurcount.QuadPart - m_llPrevcount.QuadPart) / (double)(m_llFrequency.QuadPart);

	// ���� ī��Ʈ ���� ���� ������ ���� (�������� ����� ���ؼ�)
	m_llPrevcount = m_llCurcount;

	++m_iCallCount;
	m_dAcc += m_dDT; // DT ����

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
