#pragma once
class CEntity
{
public:
	CEntity();
	virtual ~CEntity();

	void SetName(const std::wstring& _name) { mName = _name; }
	std::wstring& GetName() { return mName; }

private:
	std::wstring mName;
};

