#pragma once
#include "CScene.h"

class CScene_START :
    public CScene
{
public:
    CScene_START();
    virtual ~CScene_START();

    virtual void Enter() override;
    virtual void Exit() override;
    virtual void update() override;
};

