#include "PowerSupply.h"

void PowerSupply::supply() const
{
	cout << "Apply power" << endl;
}
void PowerSupply::supplyVC() const
{
	cout << "Power up the video card" << endl;
}
void PowerSupply::supplyRAM() const
{
	cout << "Power up the RAM" << endl;
}
void PowerSupply::supplyDVD() const
{
	cout << "Power up the DVD" << endl;
}
void PowerSupply::supplyHDD() const
{
	cout << "Power up the HDD" << endl;
}
void PowerSupply::stopSupplyVC() const
{
	cout << "Stop powering the video card" << endl;
}
void PowerSupply::stopSupplyRAM() const
{
	cout << "Stop powering the RAM" << endl;
}
void PowerSupply::stopSupplyDVD() const
{
	cout << "Stop powering the DVd" << endl;
}
void PowerSupply::stopSupplyHDD() const
{
	cout << "Stop powering the HDD" << endl;
}
void PowerSupply::shutdown() const
{
	cout << "Shutdown" << endl;
}