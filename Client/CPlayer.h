#pragma once
#include "CObject.h"
class CPlayer :
    public CObject
{
public:
    CPlayer();
    virtual ~CPlayer();

    virtual void update();
    virtual void render(HDC _dc);

private:
};