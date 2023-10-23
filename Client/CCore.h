#pragma once

class CCore
{
	SINGLE(CCore);

private:
	HWND	m_hWnd;			// 메인 윈도우 핸들
	POINT	m_ptResolution; // 메인 윈도우 해상도
	HDC		m_hDC;			// 메인 윈도우에 Draw할 DC

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