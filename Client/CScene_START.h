#pragma once
#include "CScene.h"

class CScene_START :
    public CScene
{
public:
    CScene_START();
    ~CScene_START();

    virtual void Enter();
    virtual void Exit();
};

