#pragma once
#include "DVD.h"
#include "HDD.h"
#include "PowerSupply.h"
#include "RAM.h"
#include "Sensor.h"
#include "VideoCard.h"

class PCfacade
{
protected:
	DVD* dvd;
	HDD* hdd;
	PowerSupply* pSupply;
	RAM* ram;
	Sensor* sensor;
	VideoCard* vc;
public:
	~PCfacade()
	{
		delete dvd;
		delete hdd;
		delete pSupply;
		delete ram;
		delete sensor;
		delete vc;
	}

	void beginWork() const
	{
		bool state = false;

		pSupply->supply();
		sensor->testVoltage();
		sensor->testTempSupply();
		sensor->testTempVC();
		pSupply->supplyVC();
		vc->launch();
		vc->checkMonitor();
		sensor->testTempRAM();
		pSupply->supplyRAM();
		ram->startup();
		ram->analysis();
		vc->dataRAM();
		pSupply->supplyDVD();
		dvd->launch();
		dvd->checkDisk();
		vc->dataDVD();
		pSupply->supplyHDD();
		hdd->launch();
		hdd->checkSecctor();
		vc->dataHDD();
		sensor->testTempAll();
	}

	void endWork() const
	{
		hdd->stop();
		ram->clear();
		ram->analysis();
		vc->message();
		dvd->returnPos();
		pSupply->stopSupplyVC();
		pSupply->stopSupplyRAM();
		pSupply->stopSupplyDVD();
		pSupply->stopSupplyHDD();
		sensor->testVoltage();
		pSupply->shutdown();
	}
};

