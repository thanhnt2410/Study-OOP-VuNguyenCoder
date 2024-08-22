#include "VehicleManager.h"
#include "Vehicle.h"
VehicleManager::VehicleManager(std::string name) : public Vehicle
{};
void VehicleManager::addVehicle(Vehicle* vehicle)
{
	vehicles.push_back(vehicle);
}
void VehicleManager::start()
{
	for (Vehicle* vehicle : vehicles)
	{
		vehicle->run();
	}
}