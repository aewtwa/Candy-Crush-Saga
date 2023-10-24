#pragma once
#include "CObject.h"

class CRectangle;

class CPlayer :
    public CObject
{
public:
    CPlayer();
    virtual ~CPlayer();

    virtual void update();
    virtual void render(HDC _dc);

    CRectangle* SelectRect(Vec2 _mousePos);
    void ChangeRect();

private:
};