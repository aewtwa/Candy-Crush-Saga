#include "pch.h"
#include "CPlayer.h"
#include "CScene.h"

#include "CKeyMgr.h"
#include "CTimeMgr.h"
#include "CSceneMgr.h"

CPlayer::CPlayer()
{
	SetName(L"Player");

	// CreateColloder();
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
	Vec2 vPos = GetPos();
	Vec2 vScale = GetScale();
	Rectangle(_dc, (int)(vPos.x - vScale.x / 2.f), (int)(vPos.y - vScale.y / 2.f),
				   (int)(vPos.x + vScale.x / 2.f), (int)(vPos.y + vScale.y / 2.f));
}

CRectangle* CPlayer::SelectRect(Vec2 _mousePos)
{

	return nullptr;
}

void CPlayer::ChangeRect()
{

}
