#include "pch.h"
#include "CScene_START.h"

#include "CCore.h"
#include "CObject.h"

#include "CPlayer.h"
#include "CRectangle.h"
#include "CEllipse.h"


CScene_START::CScene_START()
{

}

CScene_START::~CScene_START()
{

}

void CScene_START::Enter()
{
	// Player Object Ãß°¡
	CObject* pObj = new CPlayer;
	pObj->SetPos(Vec2(640.f, 384.f));
	pObj->SetScale(Vec2(100.f, 100.f));
	AddObject(pObj, GROUP_TYPE::DEFAULT);

	unsigned short int Width = 9;
	unsigned short int Height = 9;
	float Scale = 50.f;
	float Margin = 100.f;

	for (unsigned short int i = 0; i < Width; i++)
	{
		for (unsigned short int j = 0; j < Height; j++)
		{
			if ((i + j) % 2 == 0)
			{
				CEllipse* pEl = new CEllipse;
				pEl->SetPos(Vec2(Scale / 2.f + (Scale)*i + Margin, 143.f + (Scale)*j));
				pEl->SetScale(Vec2(Scale, Scale));
				AddObject(pEl, GROUP_TYPE::ELLIPSE);
			}
			else
			{
				CRectangle* pRe = new CRectangle;
				pRe->SetPos(Vec2(Scale / 2.f + (Scale)*i + Margin, 143.f + (Scale)*j));
				pRe->SetScale(Vec2(Scale, Scale));
				AddObject(pRe, GROUP_TYPE::RECTANGLE);
			}
		}
	}
	

	
}

void CScene_START::Exit()
{
}
