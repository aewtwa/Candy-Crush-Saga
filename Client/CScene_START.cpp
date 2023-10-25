#include "pch.h"
#include "CScene_START.h"

#include "CKeyMgr.h"
#include "CSceneMgr.h"
#include "CPathMgr.h"

#include "CCore.h"
#include "CObject.h"

#include "CPlayer.h"

#include "CTexture.h"

void CScene_START::init()
{
}

void CScene_START::Enter()
{
	
}

void CScene_START::Exit()
{
}

void CScene_START::update()
{
	CScene::update();

	if (KEY_TAP(KEY::Q))
	{
		CSceneMgr::ChangeScene(SCENE_TYPE::PLAY);
	}
}
