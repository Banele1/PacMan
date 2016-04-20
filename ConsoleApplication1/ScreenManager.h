#pragma once
#include
class ScreenManager
{
private:
	ScreenManager();
	ScreenManager(ScreenManager const&);
	void operator= (ScreenManager const&);



public:
	~ScreenManager();
	static ScreenManager &GetInstance();
};

