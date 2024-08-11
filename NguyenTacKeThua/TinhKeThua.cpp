
// -----------------------------Tính kế thừa--------------------------------

//Overriding: định nghĩa lại các hàm trong lớp cha
//thêm thuộc tính dẫn xuất
//Access modifier trong inheritance
//hàm trong private lớp cha thì lớp con không gọi được mặc dù lớp con kế thừa lớp cha
//protected: Đảm bảo con cháu gọi được hàm trong private của lớp cha nhưng không thể gọi đươc từ bên ngoài
//Constructor trong quan he ke thua
//Khi định nghĩa tham số cho hàm khởi tạo, hàm khởi tạo sẽ biến mất
//Destructor: delete thang con truoc roi moi den thang cha
//Multiple inhertance: Đa kế th
#include<iostream>
#include<string>

class Vehicle
{
public:
	Vehicle()
	{
		std::cout << "Created a vehicle\n";
	}
	/*~Vehicle()
	{
		std::cout << "Delete a vehicle\n";
	}*/
	/*Vehicle(std::string name)
	{
		modelName = name;
		std::cout << "Created a vehicle with name " << modelName << ".\n";
		
	}*/
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
	
protected:
	void run()
	{
		std::cout << "Vehicle is running\n";
	}
private:
	std::string modelName;
	int version;
};
class Car : public Vehicle
{
public:
	Car()
	{
		std::cout << "Create a Car\n";
	}

};

class Taxi : public Car			//neu khai bao taxi: private Vehicle thi se thanh private
{
public:
	Taxi()
	{
		std::cout << "Created a Taxi\n";
	}
	//Taxi(std::string name) : Vehicle(name)
	/*~Taxi()
	{
		std::cout << "Delete a taxi\n";
	}*/
	//void run()
	//{
	//	Vehicle::run(); // vừa kế thừa vừa bổ sung
	//	std::cout << "This is a Taxi\n";
	//}
	//void run(int km)
	/*{
		kmCounter = km;
	}*/
	int caculateFee()
	{
		return kmCounter * 9000;
	}
	void start()
	{
		std::cout << "Start. Ready to run\n";
		std::cout << getModelName() << " is running\n";
		run();
	}
private:
	int kmCounter;
};
class Truck : public Vehicle
{

};

int main()
{
	Taxi* taxi = new Taxi;
	
	/*Taxi* taxi1 = new Taxi("Kia Morning");
	Taxi* taxi2 = new Taxi("VF3");*/
	//taxi->setModelName("Kia Morning");
	//taxi->getModelName();
	//std::cout << taxi->getModelName();
	//taxi->run(5);
	//std::cout << "Fee: " << taxi->caculateFee() << " VND\n";
	//taxi->start();
	//taxi->run();
	return 0;
}
