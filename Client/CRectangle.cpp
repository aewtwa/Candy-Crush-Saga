#include "pch.h"
#include "CRectangle.h"

CRectangle::CRectangle()
{
	SetName(L"Rectangle");
}

CRectangle::~CRectangle()
{
}

void CRectangle::update()
{
}

void CRectangle::render(HDC _dc)
{
	Vec2 vPos = GetPos();
	Vec2 vScale = GetScale();
	Rectangle(_dc, (int)(vPos.x - vScale.x / 2.f), (int)(vPos.y - vScale.y / 2.f),
				   (int)(vPos.x + vScale.x / 2.f), (int)(vPos.y + vScale.y / 2.f));
}