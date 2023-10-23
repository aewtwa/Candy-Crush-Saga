#include "pch.h"
#include "CBlueRect.h"

CBlueRect::CBlueRect()
{
	SetName(L"BlueRect");
}

CBlueRect::~CBlueRect()
{
}

void CBlueRect::update()
{
}

void CBlueRect::render(HDC _dc)
{
	SELECT_PEN(_dc, BLUE_PEN);
	Vec2 vPos = GetPos();
	Vec2 vScale = GetScale();
	Rectangle(_dc, (int)(vPos.x - vScale.x / 2.f), (int)(vPos.y - vScale.y / 2.f),
				   (int)(vPos.x + vScale.x / 2.f), (int)(vPos.y + vScale.y / 2.f));
}