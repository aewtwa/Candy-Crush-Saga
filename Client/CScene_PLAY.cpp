#include "pch.h"
#include "CScene_PLAY.h"

#include "CCore.h"
#include "CObject.h"

#include "CPlayer.h"

#include "CBlueRect.h"
#include "CGreenRect.h"
#include "CPurpleRect.h"
#include "CRedRect.h"
#include "CYellowRect.h"

void CScene_PLAY::init()
{
}

void CScene_PLAY::Enter()
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
			if (i == 0)
			{
				CBlueRect* pRe = new CBlueRect;
				pRe->SetPos(Vec2(Scale / 2.f + (Scale)*i + Margin, 143.f + (Scale)*j));
				pRe->SetScale(Vec2(Scale, Scale));
				AddObject(pRe, GROUP_TYPE::RECTANGLE);
			}
			else if (i == 1)
			{
				CGreenRect* pRe = new CGreenRect;
				pRe->SetPos(Vec2(Scale / 2.f + (Scale)*i + Margin, 143.f + (Scale)*j));
				pRe->SetScale(Vec2(Scale, Scale));
				AddObject(pRe, GROUP_TYPE::RECTANGLE);
			}
			else if (i == 2)
			{
				CPurpleRect* pRe = new CPurpleRect;
				pRe->SetPos(Vec2(Scale / 2.f + (Scale)*i + Margin, 143.f + (Scale)*j));
				pRe->SetScale(Vec2(Scale, Scale));
				AddObject(pRe, GROUP_TYPE::RECTANGLE);
			}
			else if (i == 3)
			{
				CRedRect* pRe = new CRedRect;
				pRe->SetPos(Vec2(Scale / 2.f + (Scale)*i + Margin, 143.f + (Scale)*j));
				pRe->SetScale(Vec2(Scale, Scale));
				AddObject(pRe, GROUP_TYPE::RECTANGLE);
			}
			else if (i == 4)
			{
				CYellowRect* pRe = new CYellowRect;
				pRe->SetPos(Vec2(Scale / 2.f + (Scale)*i + Margin, 143.f + (Scale)*j));
				pRe->SetScale(Vec2(Scale, Scale));
				AddObject(pRe, GROUP_TYPE::RECTANGLE);
			}
		}
	}
}

void CScene_PLAY::Exit()
{
}

void CScene_PLAY::update()
{
	CScene::update();
}