#pragma once
#include "CScene.h"

class CScene_PLAY :
    public CScene
{
public:
    CScene_PLAY();
    virtual ~CScene_PLAY();

    virtual void Enter() override;
    virtual void Exit() override;
    virtual void update() override;
};