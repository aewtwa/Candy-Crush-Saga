#include "pch.h"
#include "CSceneMgr.h"

#include "CScene_START.h"
#include "CScene_PLAY.h"

CScene* CSceneMgr::m_pCurScene = nullptr;
CScene* CSceneMgr::m_arrScene[(UINT)SCENE_TYPE::END] = {};

CSceneMgr::CSceneMgr()
{

}

CSceneMgr::~CSceneMgr()
{
	// 씬 전부 삭제
	for (UINT i = 0; i < (UINT)SCENE_TYPE::END; ++i)
	{
		if (nullptr != m_arrScene[i])
		{
			delete m_arrScene[i];
		}
	}

}

void CSceneMgr::ChangeScene(SCENE_TYPE _Type)
{
	if (m_pCurScene == m_arrScene[(UINT)_Type])
		return;

	if (nullptr != m_pCurScene)
		m_pCurScene->Exit();

	m_pCurScene = m_arrScene[(UINT)_Type];
	m_pCurScene->Enter();
}

void CSceneMgr::init()
{
	// Scene 생성
	m_arrScene[(UINT)SCENE_TYPE::START] = new CScene_START;
	m_arrScene[(UINT)SCENE_TYPE::PLAY] = new CScene_PLAY;
	//m_arrScene[(UINT)SCENE_TYPE::STAGE_01] = new CScene_STAGE_01;
	//m_arrScene[(UINT)SCENE_TYPE::STAGE_02] = new CScene_STAGE_02;

	// 현재 씬 지정
	m_pCurScene = m_arrScene[(UINT)SCENE_TYPE::PLAY];
	m_pCurScene->Enter();
}

void CSceneMgr::update()
{
	if (nullptr != m_pCurScene)
		m_pCurScene->update();
}

void CSceneMgr::render(HDC _dc)
{
	m_pCurScene->render(_dc);
}
