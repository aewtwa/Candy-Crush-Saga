#pragma once

class CCore
{
	SINGLE(CCore);

private:
	HWND	m_hWnd;			// ���� ������ �ڵ�
	POINT	m_ptResolution; // ���� ������ �ػ�
	HDC		m_hDC;			// ���� �����쿡 Draw�� DC

	HBITMAP	m_hBit;
	HDC		m_memDC;

	HPEN	m_arrPen[PEN_END];

	void CreateDefaultGDI();

public:
	int init(HWND _hWnd, POINT _ptResolution);
	void progress();

	HWND GetMainHwnd() { return m_hWnd; }
	HDC GetMainDC() { return m_hDC; }
	POINT GetResolution() { return m_ptResolution; }

	HPEN GetPen(PEN_TYPE _type) { return m_arrPen[_type]; }
};