#pragma once

// 1. ������ ����ȭ
// ���� ������ ������ ���� Ű�� ����, ������ �Է� �̺�Ʈ�� ��������.

// 2. Ű �Է� �̺�Ʈ ó��
// tap, hold, away

enum class KEY_STATE
{
	TAP,	// �� ���� ����
	HOLD,	// ������ �ִ� ����
	AWAY,	// �� �� ����
	NONE	// ������ �ʰ�, �������� ������ ���� ����
};

enum class KEY
{
	//Alphabet
	Q, W, E, R, T, Y, U, I, O, P,
	A, S, D, F, G, H, J, K, L,
	Z, X, C, V, B, N, M,

	//Special Key
	ENTER, ESC, LSHIFT, LALT, LCTRL,
	SPACE, LEFT, RIGHT, UP, DOWN,
	LBTN, RBTN,

	//Num Pad
	NUM_0, NUM_1, NUM_2,
	NUM_3, NUM_4, NUM_5,
	NUM_6, NUM_7, NUM_8,
	NUM_9,

	//Num Line
	N_0, N_1, N_2, N_3, N_4, N_5,
	N_6, N_7, N_8, N_9,

	END
};

struct tKeyInfo
{
	KEY_STATE	eState;		// Ű�� ���°�
	bool		bPrevPush;  // ���� �����ӿ��� ���ȴ��� ���� 
};

class CKeyMgr
{
	SINGLE(CKeyMgr);
private:
	vector<tKeyInfo>	m_vecKey;
	static Vec2			mMousePos;
public:
	void init();
	void update();

	KEY_STATE GetKeyState(KEY _eKey) { return m_vecKey[(int)_eKey].eState; }
	static __forceinline Vec2 GetMousePosition() { return mMousePos; }
};

