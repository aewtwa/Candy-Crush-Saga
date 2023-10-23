#pragma once

// Singleton ��ũ��
#define SINGLE(type) public:\
						static type* GetInst()\
						{\
							static type mgr;\
							return &mgr;\
						}\
					private:\
						type();\
						~type();

#define fDT CTimeMgr::GetInst()->GetfDT()
#define DT CTimeMgr::GetInst()->GetDT()

#define KEY_CHECK(key, state) CKeyMgr::GetInst()->GetKeyState(key) == state
#define KEY_HOLD(key) KEY_CHECK(key, KEY_STATE::HOLD)
#define KEY_TAP(key) KEY_CHECK(key, KEY_STATE::TAP)
#define KEY_AWAY(key) KEY_CHECK(key, KEY_STATE::AWAY)
#define KEY_NONE(key) KEY_CHECK(key, KEY_STATE::NONE)

#define PI 3.1415926535f

#define SELECT_PEN(DC, TYPE) FSelectPen tempPenSelect(DC, TYPE)
#define SELECT_BRUSH(DC, hBrush) FSelectBrush tempBrushSelect(DC, hBrush)

enum class GROUP_TYPE
{
	DEFAULT,
	PLAYER,
	RECTANGLE,
	ELLIPSE,
	END
};

enum class SCENE_TYPE
{
	TOOL,
	START,
	STAGE_01,
	STAGE_02,

	END
};

enum PEN_TYPE
{
	GREEN_PEN,
	BLUE_PEN,
	RED_PEN,
	YELLOW_PEN,
	PURPLE_PEN,
	PEN_END
};