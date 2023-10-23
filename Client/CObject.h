#pragma once
#include "CEntity.h"

class CComponent;

class CObject :
	public CEntity
{
private:
	Vec2				m_vPos;
	Vec2				m_vScale;
	vector<CComponent*>	m_vecComponent;

protected:
	template<typename T>
	T* AddComponent(const wstring& _strName = L"")
	{
		T* pNewCom = new T(this);
		m_vecComponent.push_back(pNewCom);
		pNewCom->SetName(_strName);
		return pNewCom;
	}

public:
	CObject();
	virtual ~CObject();

	Vec2 GetPos() { return m_vPos; }
	Vec2 GetScale() { return m_vScale; }

	void SetPos(Vec2 _vPos) { m_vPos = _vPos; }
	void SetScale(Vec2 _vScale) { m_vScale = _vScale; }

	virtual void update() = 0;
	virtual void render(HDC _dc) = 0;
};

