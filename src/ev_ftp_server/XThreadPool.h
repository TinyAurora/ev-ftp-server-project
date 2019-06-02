#pragma once
#include <vector>
class XThread;
class XTask;
class XThreadPool
{
public:
	//单件模式
	static XThreadPool* Get()
	{
		static XThreadPool p;
		return &p;
	}
	//初始化所有线程并启动线程
	void Init(int threadCount);

	//分发线程
	void Dispatch(XTask *task);
private:
	//线程数量
	int threadCount = 0;
	int lastThread = -1;
	//线程池线程
	std::vector<XThread *>threads;
	XThreadPool() {};

};

