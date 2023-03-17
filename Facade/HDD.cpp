#include "HDD.h"

void HDD::launch() const
{
	cout << "Hard drive startup" << endl;
}
void HDD::checkSecctor() const
{
	cout << "Boot sector check" << endl;
}

void HDD::stop() const
{
	cout << "Device stop" << endl;
}