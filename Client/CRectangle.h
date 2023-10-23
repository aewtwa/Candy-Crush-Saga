#pragma once
#include "CObject.h"
class CRectangle :
    public CObject
{
public:
    CRectangle();
    virtual ~CRectangle();

    virtual void update();
    virtual void render(HDC _dc);
};