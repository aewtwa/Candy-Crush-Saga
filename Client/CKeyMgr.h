#pragma once

// 1. 프레임 동기화
// 동일 프레임 내에서 같은 키에 대해, 동일한 입력 이벤트를 가져간다.

// 2. 키 입력 이벤트 처리
// tap, hold, away

enum class KEY_STATE
{
	TAP,	// 막 누른 시점
	HOLD,	// 누르고 있는 시점
	AWAY,	// 막 뗀 시점
	NONE	// 눌리지 않고, 이전에도 눌리지 않은 시점
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
	KEY_STATE	eState;		// 키의 상태값
	bool		bPrevPush;  // 이전 프레임에서 눌렸는지 여부 
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

