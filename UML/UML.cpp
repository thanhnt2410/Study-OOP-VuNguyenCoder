#include<iostream>
#include<string>
#include<vector>

//Forward-declaration
class Checker;
class Vehicle;
class Engine;
class Car;
//Implementation
class Checker
{

};
Checker* checker = new Checker();
class Vehicle
{
public:
	Vehicle()
	{
		std::cout << "Created a vehicle\n";
	}
	std::string getModelName()
	{
		return modelName;
	}
	void setModelName(std::string name)
	{
		modelName = name;
	}
	int getVersion()
	{
		return version;
	}
	void setVersion(int v)
	{
		version = v;
	}
	bool isValid(Checker * checker)
	{
		bool result = false;
		
		//checker->check();
		//result = checker->getResult();
		return result;
	}

protected:
	void run()
	{
		std::cout << "Vehicle is running\n";
	}
private:
	std::string modelName;
	int version;
};

class Engine
{

};
class Car : public Vehicle
{
public:
	Car()
	{
		//engine.initinfo();
		std::cout << "Create a Car\n";
		//engine.set()
	}
	~Car() { }

};

class Person
{
public:
	void setVehicle(Vehicle* v) {
		vehicle_list = v;
	}
private:
	std::vector<Vehicle*> vehicle_list;
	std::string name;
	Engine engine;
};

int main()
{
	Vehicle* vehicle = new Car();
	Person* person = new Person;
	person->setVehicle(vehicle); //Neu ko co dong code nay thi 2 doi tuong vehicle va person van hoat dong binh thuong

	return 0;
}