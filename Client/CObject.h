#pragma once
#include "CEntity.h"

class CObject :
	public CEntity
{
private:
	Vec2				m_vPos;
	Vec2				m_vScale;
	class CCollider*	m_pCollider;

public:
	CObject();
	virtual ~CObject();

	Vec2 GetPos() { return m_vPos; }
	Vec2 GetScale() { return m_vScale; }

	void SetPos(Vec2 _vPos) { m_vPos = _vPos; }
	void SetScale(Vec2 _vScale) { m_vScale = _vScale; }

	virtual void update() = 0;
	virtual void finalupdate() final;
	virtual void render(HDC _dc) = 0;

	void CreateCollider();
};

