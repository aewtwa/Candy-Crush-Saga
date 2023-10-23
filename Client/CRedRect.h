#pragma once
#include "CRectangle.h"
class CRedRect :
    public CRectangle
{
public:
    CRedRect();
    virtual ~CRedRect();

    virtual void update();
    virtual void render(HDC _dc);
};