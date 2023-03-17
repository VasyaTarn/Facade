#include "Sensor.h"

void Sensor::testVoltage() const
{
	cout << "Voltage test" << endl;
}
void Sensor::testTempSupply() const
{
	cout << "Checking the temperature in the power supply" << endl;
}
void Sensor::testTempVC() const
{
	cout << "Checking the temperature in the video card" << endl;
}
void Sensor::testTempRAM() const
{
	cout << "Checking the temperature in the RAM" << endl;
}
void Sensor::testTempAll() const
{
	cout << "Checking the temperature of all systems" << endl;
}