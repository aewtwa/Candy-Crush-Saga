#include "pch.h"
#include "CComponent.h"
#include "CObject.h"

CComponent::CComponent(CObject* _Owner)
	: m_pOwner(_Owner)
{
}

CComponent::~CComponent()
{
}