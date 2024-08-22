#include "VehicleApp.h"
#include "VehicleManager.h"

void VehicleApp::init()
{
	Vehicle* taxi = new Vehicle("Kia Morning");
	Vehicle* pickup = new Vehicle("Ford");
	VehicleManager::getManager()->addVehicle(taxi);
	VehicleManager::getManager()->addVehicle(pickup);

}
void VehicleApp::start()
{
	//start any object
	VehicleManager::getManager()->start();
}