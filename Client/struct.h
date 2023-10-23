#pragma once

struct Vec2
{
	float x;
	float y;

public:
	Vec2()
		: x(0.f)
		, y(0.f)
	{}

	Vec2(float _x, float _y)
		: x(_x)
		, y(_y)
	{}

	Vec2(int _x, int _y)
		: x((float)_x)
		, y((float)_y)
	{}

	Vec2(const POINT& _pt)
		: x((float)_pt.x)
		, y((float)_pt.y)
	{}

	Vec2& operator = (POINT _pt)
	{
		x = (float)_pt.x;
		y = (float)_pt.y;
	}

	float Length()
	{
		return sqrt(x * x + y * y);
	}

	Vec2& Nomalize()
	{
		float fLen = Length();

		assert(fLen != 0.f);

		x /= fLen;
		y /= fLen;

		return *this;
	}
};

struct FSelectPen
{
private:
	HPEN hPrevPen;
	HDC  hCurDC;

public:
	FSelectPen(HDC _dc, PEN_TYPE _Type);
	~FSelectPen();
};