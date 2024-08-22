#include "Vehicle.h"

Vehicle::Vehicle(std::string name) : modelName(name)
{};

void Vehicle::run()
{
	std::cout << modelName << "is running";
}
