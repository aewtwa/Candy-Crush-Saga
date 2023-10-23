#include "pch.h"
#include "CRedRect.h"

CRedRect::CRedRect()
{
	SetName(L"RedRect");
}

CRedRect::~CRedRect()
{
}

void CRedRect::update()
{
}

void CRedRect::render(HDC _dc)
{
	SELECT_PEN(_dc, RED_PEN);
	Vec2 vPos = GetPos();
	Vec2 vScale = GetScale();
	Rectangle(_dc, (int)(vPos.x - vScale.x / 2.f), (int)(vPos.y - vScale.y / 2.f),
				   (int)(vPos.x + vScale.x / 2.f), (int)(vPos.y + vScale.y / 2.f));
}