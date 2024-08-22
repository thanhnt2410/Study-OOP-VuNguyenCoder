#include<iostream>
#include<string>
#include<vector>
#include"Vehicle.h"
#include"VehicleManager.h"

VehicleManager* VehicleManager::manager = NULL;


int main()
{

	//VehicleManager::getManager();
	/*Vehicle* taxi = new Vehicle("Kia Morning");
	Vehicle* pickup = new Vehicle("Ford");
	VehicleManager::getManager()->addVehicle(taxi);
	VehicleManager::getManager()->addVehicle(pickup);
	VehicleManager::getManager()->start();*/
	VehicleApp app;
	app.init();
	app.start();

	return 0;
}

