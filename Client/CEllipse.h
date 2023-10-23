#pragma once
#include "CObject.h"
class CEllipse :
    public CObject
{
public:
    CEllipse();
    virtual ~CEllipse();

    virtual void update();
    virtual void render(HDC _dc);
};