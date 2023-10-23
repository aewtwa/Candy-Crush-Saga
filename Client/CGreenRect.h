#pragma once
#include "CRectangle.h"
class CGreenRect :
    public CRectangle
{
public:
    CGreenRect();
    virtual ~CGreenRect();

    virtual void update();
    virtual void render(HDC _dc);
};