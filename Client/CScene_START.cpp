#include "pch.h"
#include "CScene_START.h"

#include "CCore.h"
#include "CObject.h"

#include "CPlayer.h"

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
}

void CScene_START::Exit()
{
}
