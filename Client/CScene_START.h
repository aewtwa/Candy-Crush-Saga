#pragma once
#include "CScene.h"

class CScene_START :
    public CScene
{
public:

    virtual void init() override;
    virtual void Enter() override;
    virtual void Exit() override;

    virtual void update() override;
};