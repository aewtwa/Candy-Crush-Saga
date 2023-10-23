#include "pch.h"
#include "CGreenRect.h"

CGreenRect::CGreenRect()
{
	SetName(L"GreenRect");
}

CGreenRect::~CGreenRect()
{
}

void CGreenRect::update()
{
}

void CGreenRect::render(HDC _dc)
{
	SELECT_PEN(_dc, GREEN_PEN);
	Vec2 vPos = GetPos();
	Vec2 vScale = GetScale();
	Rectangle(_dc, (int)(vPos.x - vScale.x / 2.f), (int)(vPos.y - vScale.y / 2.f),
				   (int)(vPos.x + vScale.x / 2.f), (int)(vPos.y + vScale.y / 2.f));
}