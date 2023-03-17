#pragma once
#include <iostream>

using namespace std;

class Sensor
{
public:
	void testVoltage() const;
	void testTempSupply() const;
	void testTempVC() const;
	void testTempRAM() const;
	void testTempAll() const;
};

