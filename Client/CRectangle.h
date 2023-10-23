#pragma once
#include "CObject.h"
class CRectangle :
    public CObject
{
public:
    CRectangle();
    virtual ~CRectangle();

    virtual void update() = 0;
    virtual void render(HDC _dc) = 0;
};