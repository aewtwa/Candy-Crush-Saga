#pragma once

class CTimeMgr
{
	SINGLE(CTimeMgr);
private:
	LARGE_INTEGER	m_llCurcount;
	LARGE_INTEGER	m_llPrevcount;
	LARGE_INTEGER	m_llFrequency;

	double			m_dDT; // ������ ������ �ð� ��
	double			m_dAcc; // 1�� üũ�� ���� �����ð�
	UINT			m_iCallCount; // �ʴ� �Լ� ȣ�� üũ
	UINT			m_iFPS; // �ʴ� ȣ�� Ƚ��
	// FPS
	// 1�����Ӵ� �ð� Delta Time
public:
	void init();
	void update();
	void render();

	double GetDT() { return m_dDT; }
	float GetfDT() { return (float)m_dDT; }
};