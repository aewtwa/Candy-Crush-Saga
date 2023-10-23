#include "pch.h"
#include "CPurpleRect.h"

CPurpleRect::CPurpleRect()
{
	SetName(L"PurpleRect");
}

CPurpleRect::~CPurpleRect()
{
}

void CPurpleRect::update()
{
}

void CPurpleRect::render(HDC _dc)
{
	SELECT_PEN(_dc, PURPLE_PEN);
	Vec2 vPos = GetPos();
	Vec2 vScale = GetScale();
	Rectangle(_dc, (int)(vPos.x - vScale.x / 2.f), (int)(vPos.y - vScale.y / 2.f),
				   (int)(vPos.x + vScale.x / 2.f), (int)(vPos.y + vScale.y / 2.f));
}