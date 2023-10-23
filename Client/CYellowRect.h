#pragma once
#include "CRectangle.h"
class CYellowRect :
    public CRectangle
{
public:
    CYellowRect();
    virtual ~CYellowRect();

    virtual void update();
    virtual void render(HDC _dc);
};