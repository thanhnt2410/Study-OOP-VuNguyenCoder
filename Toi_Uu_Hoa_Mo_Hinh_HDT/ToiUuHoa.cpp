#include<iostream>
#include<string>

//-------------------initialization list----------------------
//-------------------copy constructor-------------------------
struct RegisterInfo 
{
	RegisterInfo(){}
	RegisterInfo(const RegisterInfo& otherInfo)
	{
		std::cout << "Clone a register Info \n";
		license = otherInfo.license;
		ownerName = otherInfo.ownerName;
		//otherInfo.ownerName = "ABC";
	}
	std::string license;
	std::string ownerName;
} ;
class Person
{
public:
	Person(std::string name) : fullname(name){}
	void setFullName(std::string name) { fullname = name; }
	std::string getFullname() { return fullname; }
private:
	std::string fullname;
};
class Vehicle
{
public:
	Vehicle(const std::string& name, const RegisterInfo& info) : modelName(name), ownerName(info.ownerName), license(info.license)
	{
		//std::cout << "Create a vehicle \n";
	}
	//Vehicle(Vehicle& otherVehicle)
	//{
	//	//std::cout << "Clone a vehicle " << otherVehicle.getModelName() << "\n";
	//	modelName = otherVehicle.getModelName();
	//	owner = new Person(otherVehicle.getOwner()->getFullname());
	//}

	/*void setOwner(Person* person){owner = person;}
	Person* getOwner() { return owner; }
	std::string getModelName() { return modelName; }*/
	virtual void run()
	{
		std::cout << "A vehicle is running\n";
	}

protected:
	std::string modelName;
	//Person* owner;
	std::string ownerName;
	std::string license;
private:
	
};


//class Taxi : public Vehicle
//{
//public:
//	Taxi(std::string name) : Vehicle(name)
//	{
//		
//	}
//	void run() override
//	{
//
//	}
//
//};

int main()
{
	//Person* person = new Person("Thanh");
	//Vehicle* vehicle1 = new Vehicle("Kia Morning");
	//vehicle1->setOwner(person);
 //   Vehicle* vehicle2 = new Vehicle(*vehicle1); // copy object 1 sang object 2
	///*vehicle1->run();
	//vehicle2->run();*/
	//vehicle2->getOwner()->setFullName("Dat");
	//std::cout << vehicle2->getOwner()->getFullname()<<"\n";
	//std::cout << vehicle1->getOwner()->getFullname()<<"\n";
	RegisterInfo infoThanh;
	infoThanh.ownerName = "Thanh";
	infoThanh.license = "37F2-64550";
	Vehicle* taxi = new Vehicle("Kia Morining", infoThanh);
	taxi->run();
	return 0;
}
//Create a vehicle
//Clone a vehicle Kia Morning
//Kia MorningVehicle is running
//Vehicle is running
