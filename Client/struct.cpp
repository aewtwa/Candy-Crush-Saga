#include "pch.h"
#include "struct.h"

#include "CCore.h"

FSelectPen::FSelectPen(HDC _dc, PEN_TYPE _Type)
	: hPrevPen(nullptr)
	, hCurDC(_dc)
{
	hPrevPen = (HPEN)SelectObject(hCurDC, CCore::GetInst()->GetPen(_Type));
}

FSelectPen::~FSelectPen()
{
	SelectObject(hCurDC, hPrevPen);
}