#include "pch.h"
#include "CEllipse.h"

CEllipse::CEllipse()
{
	SetName(L"Ellipse");
}

CEllipse::~CEllipse()
{
}

void CEllipse::update()
{
}

void CEllipse::render(HDC _dc)
{
	Vec2 vPos = GetPos();
	Vec2 vScale = GetScale();
	Ellipse(_dc, (int)(vPos.x - vScale.x / 2.f), (int)(vPos.y - vScale.y / 2.f),
				 (int)(vPos.x + vScale.x / 2.f), (int)(vPos.y + vScale.y / 2.f));
}
