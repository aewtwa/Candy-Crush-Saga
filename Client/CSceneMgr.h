#pragma once

class CSceneMgr
{
	SINGLE(CSceneMgr);
private:
	static class CScene*	m_pCurScene;						// ÇöÀç ¾À
	static CScene*			m_arrScene[(UINT)SCENE_TYPE::END];	// ¸ðµç ¾À ¸ñ·Ï

public:
	void init();
	void update();
	void render(HDC _dc);

	static void ChangeScene(SCENE_TYPE _Type);
	CScene* GetCurScene() { return m_pCurScene; }
};