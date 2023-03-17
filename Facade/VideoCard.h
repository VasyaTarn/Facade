#pragma once
#include <iostream>

using namespace std;

class VideoCard
{
public:
	void launch() const;
	void checkMonitor() const;
	void dataRAM() const;
	void dataDVD() const;
	void dataHDD() const;

	void message() const;
};

