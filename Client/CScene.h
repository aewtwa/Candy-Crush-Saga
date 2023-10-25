#pragma once

// 전방선언
class CObject;

class CScene
{
private:
	vector<CObject*>	m_arrObj[(UINT)GROUP_TYPE::END]; // 오브젝트를 저장 및 관리할 벡터를 그룹 갯수만큼 선언
	wstring				m_strName; // Scene 이름

public:
	CScene();
	virtual ~CScene();

	void SetName(const wstring& _strName) { m_strName = _strName; }
	const wstring& GetName() { return m_strName; }


	void AddObject(CObject* _pObj, GROUP_TYPE _eType)
	{
		m_arrObj[(UINT)_eType].push_back(_pObj);
	}
	virtual void init() = 0;
	virtual void Enter() = 0; // 해당 Scene에 진입시 호출
	virtual void Exit() = 0;  // 해당 Scene을 탈출시 호출

	virtual void update();
	virtual void finalupdate();
	virtual void render(HDC _dc);
};