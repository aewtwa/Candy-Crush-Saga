#pragma once

class CCore
{
	SINGLE(CCore);
public:

	int init(HWND _hWnd, POINT _ptResolution);


private:
	HWND	m_hWnd;			// ���� ������ �ڵ�
	POINT	m_ptResolution; // ���� ������ �ػ�
	
	CCore();
	~CCore();
};