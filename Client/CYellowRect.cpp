#include "pch.h"
#include "CYellowRect.h"

CYellowRect::CYellowRect()
{
	SetName(L"YellowRect");
}

CYellowRect::~CYellowRect()
{
}

void CYellowRect::update()
{
}

void CYellowRect::render(HDC _dc)
{
	SELECT_PEN(_dc, YELLOW_PEN);
	Vec2 vPos = GetPos();
	Vec2 vScale = GetScale();
	Rectangle(_dc, (int)(vPos.x - vScale.x / 2.f), (int)(vPos.y - vScale.y / 2.f),
				   (int)(vPos.x + vScale.x / 2.f), (int)(vPos.y + vScale.y / 2.f));
}