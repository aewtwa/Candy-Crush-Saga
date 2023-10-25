#pragma once
#include "CObject.h"

class CRectangle;
class CTexture;

class CPlayer :
    public CObject
{
private:
    CTexture* m_pTex;

public:
    CPlayer();
    virtual ~CPlayer();

    virtual void update();
    virtual void render(HDC _dc);

    CRectangle* SelectRect(Vec2 _mousePos);
    void ChangeRect();

};