#pragma once
#include "Vehicle.h"
#include <iostream>
#include<string>
#include<vector>
class VehicleManager :
    public Vehicle
{
public:
	void addVehicle(Vehicle* vehicle);
	static VehicleManager* getManager()
	{
		if (manager == NULL)
		{
			manager = new VehicleManager;
		}
		return manager;
	}
	void start();
private:
	std::vector<Vehicle*> vehicles;
	static VehicleManager* manager;
	VehicleManager()
	{

	}
};