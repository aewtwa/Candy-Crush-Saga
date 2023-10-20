#include "pch.h"
#include "CSceneMgr.h"

#include "CScene_START.h"

CSceneMgr::CSceneMgr()
	: m_arrScene{}
	, m_pCurScene(nullptr)
{

}

CSceneMgr::~CSceneMgr()
{
	// �� ���� ����
}

void CSceneMgr::init()
{
	// Scene ����
	m_arrScene[(UINT)SCENE_TYPE::START] = new CScene_START;

	// ���� �� ����
	m_pCurScene = m_arrScene[(UINT)SCENE_TYPE::START];
}
