#pragma once
#include <iostream>

using namespace std;

class PowerSupply
{
public:
	void supply() const;
	void supplyVC() const;
	void supplyRAM() const;
	void supplyDVD() const;
	void supplyHDD() const;

	void stopSupplyVC() const;
	void stopSupplyRAM() const;
	void stopSupplyDVD() const;
	void stopSupplyHDD() const;
	void shutdown() const;
};

