#include "pch.h"
#include "CScene_START.h"

#include "CKeyMgr.h"
#include "CSceneMgr.h"
#include "CPathMgr.h"

#include "CCore.h"
#include "CObject.h"

#include "CPlayer.h"

#include "CTexture.h"

CScene_START::CScene_START()
{

}

CScene_START::~CScene_START()
{

}

void CScene_START::Enter()
{
	CTexture* pTex = new CTexture;

	wstring strFilePath = CPathMgr::GetInst()->GetContentPath();
	strFilePath += L"texture\\mouse.bmp";
	pTex->Load(strFilePath);

	delete pTex;
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
