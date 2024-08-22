#pragma once
#include "Vehicle.h"
#include <iostream>
#include<string>
#include<vector>
#include"VehicleManager.h"
class VehicleApp :
    public Vehicle
{
public:
	VehicleApp() :version("1.0") {}
	void init();
	void start();
private:
	std::string version;
};
