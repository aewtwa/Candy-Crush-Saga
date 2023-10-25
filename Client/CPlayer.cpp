#include "pch.h"
#include "CPlayer.h"
#include "CScene.h"

#include "CKeyMgr.h"
#include "CTimeMgr.h"
#include "CSceneMgr.h"
#include "CPathMgr.h"
#include "CResMgr.h"

#include "CTexture.h"

CPlayer::CPlayer()
	:m_pTex(nullptr)
{
	SetName(L"Player");

	m_pTex = CResMgr::GetInst()->LoadTexture(L"PlayerTex", L"texture\\mouse.bmp");

	CreateCollider();
}

CPlayer::~CPlayer()
{

}

void CPlayer::update()
{
	Vec2 vPos = GetPos();

	if (KEY_HOLD(KEY::W))
	{
		vPos.y -= 200.f * fDT;
	}

	if (KEY_HOLD(KEY::S))
	{
		vPos.y += 200.f * fDT;
	}
	if (KEY_HOLD(KEY::A))
	{
		vPos.x -= 200.f * fDT;
	}

	if (KEY_HOLD(KEY::D))
	{
		vPos.x += 200.f * fDT;
	}

	if (KEY_TAP(KEY::LBTN))
	{
		Vec2 MousePos = CKeyMgr::GetMousePosition();
		SelectRect(MousePos);
	}

	SetPos(vPos);
}

void CPlayer::render(HDC _dc)
{
	/*Vec2 vPos = GetPos();
	Vec2 vScale = GetScale();
	Rectangle(_dc, (int)(vPos.x - vScale.x / 2.f), (int)(vPos.y - vScale.y / 2.f),
				   (int)(vPos.x + vScale.x / 2.f), (int)(vPos.y + vScale.y / 2.f));*/

	int iWidth = (int)m_pTex->Width();
	int iHeight = (int)m_pTex->Height();
	
	Vec2 vPos = GetPos();

	TransparentBlt(_dc,
		int(vPos.x - (float)(iWidth / 2)),
		int(vPos.y - (float)(iHeight / 2)),
		iWidth, iHeight,
		m_pTex->GetDC(),
		0, 0, iWidth, iHeight, RGB(255, 0, 255));
}

CRectangle* CPlayer::SelectRect(Vec2 _mousePos)
{

	return nullptr;
}

void CPlayer::ChangeRect()
{

}
