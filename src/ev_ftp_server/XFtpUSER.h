#pragma once
#include "XFtpTask.h"
class XFtpUSER : public XFtpTask
{
public:
	//Ω‚Œˆ–≠“È
	virtual void Parse(std::string type, std::string msg);
	XFtpUSER();
	~XFtpUSER();
};

