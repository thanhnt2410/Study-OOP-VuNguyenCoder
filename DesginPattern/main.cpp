#include<iostream>
#include<string>
#include<vector>
//-------------------Desgine Pattern - Singleton - Những class chỉ có 1 đối tượng duy nhất----------------
//------------------------------------Facade Pattern------------------------------------------------------
class Vehicle
{
public:
	Vehicle(std::string name) : modelName(name)
	{
		
	}

	virtual void run()
	{
		std::cout << modelName<<" is running\n";
	}

protected:
	std::string modelName;
	//Person* owner;
	std::string ownerName;
	std::string license;
private:

};
class VehicleManager1
{
public:
	void addVehicle(Vehicle* vehicle)
	{
		vehicles.push_back(vehicle);
	}
	static VehicleManager1* getManager()
	{
		if(manager == NULL)
		{
			manager = new VehicleManager1;
		}
		return manager;
	}
	void start()
	{
		for(Vehicle* vehicle:vehicles)
		{
			vehicle->run();
		}
	}
private:
	std::vector<Vehicle*> vehicles;
	static VehicleManager1* manager;
	VehicleManager1()
	{

	}
};
VehicleManager1* VehicleManager1::manager = NULL;
class VehicleApp
{
public:
	VehicleApp():version("1.0"){}
	void init()
	{
		Vehicle* taxi = new Vehicle("Kia Morning");
		Vehicle* pickup = new Vehicle("Ford");
		VehicleManager1::getManager()->addVehicle(taxi);
		VehicleManager1::getManager()->addVehicle(pickup);

	}
	void start()
	{
		//start any object
		VehicleManager1::getManager()->start();
	}
private:
	std::string version;
};

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

