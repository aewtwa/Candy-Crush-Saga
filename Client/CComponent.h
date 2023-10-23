#pragma once
#include "CEntity.h"

class CObject;

class CComponent :
    public CEntity
{
private:
    CObject* const m_pOwner;

public:
    CComponent(CObject* _Owner);
    ~CComponent();

    CObject* GetOwner() { return m_pOwner; }

    virtual void tick(float _DT) {}
    virtual void finaltick(float _DT) = 0;
    virtual void render(HDC _dc) {}
};

