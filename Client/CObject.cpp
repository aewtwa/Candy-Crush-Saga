#include "pch.h"
#include "CObject.h"

#include "CCollider.h"

CObject::CObject()
	: m_vPos{}
	, m_vScale{}
	, m_pCollider(nullptr)
{
}

CObject::~CObject()
{
	if (nullptr != m_pCollider)
		delete m_pCollider;
}

void CObject::finalupdate()
{
	if (m_pCollider)
		m_pCollider->finalupdate();
}
 
void CObject::CreateCollider()
{
	m_pCollider = new CCollider;
	m_pCollider->m_pOwner = this;
}

