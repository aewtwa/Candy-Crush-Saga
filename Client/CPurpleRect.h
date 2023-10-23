#pragma once
#include "CRectangle.h"
class CPurpleRect :
    public CRectangle
{
public:
    CPurpleRect();
    virtual ~CPurpleRect();

    virtual void update();
    virtual void render(HDC _dc);
};