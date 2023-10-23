#pragma once
#include "CRectangle.h"
class CBlueRect :
    public CRectangle
{
public:
    CBlueRect();
    virtual ~CBlueRect();

    virtual void update();
    virtual void render(HDC _dc);
};