
//------------------Nguyên Tăc Đa Hình ( Nhiều hình thái)-------------------------
//Khi ép kiểu cha về kiểu con, sẽ ko bao gồm thuộc tính của kiểu con
#include<iostream>
#include<string>

class Vehicle
{
public:
	Vehicle()
	{
		//std::cout << "Created a vehicle\n";
	}

	std::string getModelName()
	{
		return modelName;
	}
	void setModelName(std::string name)
	{
		modelName = name;
	}
	virtual void run()
	{
		std::cout << "A vehicle is running...!\n";
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
		//std::cout << "Create a Car\n"; 
	}
	void run()
	{
		std::cout << "a Car is running ...!\n";
	}
private:
	std::string ownerName;
};

class Taxi : public Car			//neu khai bao taxi: private Vehicle thi se thanh private
{
public:
	Taxi()
	{
		std::cout << "Created a Taxi\n";
	}

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
	void run() override		// từ khoá override có tác dụng dễ  đọc code ( định nghĩa lại)
	{
		std::cout << "a truck is running ...!\n";
	}
};

class Motobike :public Vehicle
{
public:
	void run()
	{
		std::cout << "a motorbike is running ...!\n";
	}
};
//class int
//class float : public int

int main()
{

	////Car* car = new Car;
	////((Vehicle *)car)->run(); //ếp kiểu con về kiểu cha (Up-casting)
	//Car* car = new Car();
	//Vehicle* vehicle =(Vehicle*) car;
	//((Car*) vehicle)->run();// ep kieu cha ve kieu con (Down-casting), không nên down casting vì dễ gặp lỗi ko mong muốn
	////Có thể ép kiểu lên xong ép kiểu xuống, lúc đó sẽ không bị gặp lỗi không mong muốn
	//

	//return 0;
	//----------------------Hàm ảo ( Virtual function)-----------------------
	int x = 5.5;
	Vehicle* car = new Car(); //ep kieu ve Vehicle
	Vehicle* truck = new Truck();
	Vehicle* motorbike = new Motobike();
	Vehicle* vehicle_list[3];
	vehicle_list[0] = car;
	vehicle_list[1] = truck;
	vehicle_list[2] = motorbike;
	for (int i = 0; i < 3; i++)
	{
		vehicle_list[i]->run();
	}
}
//virtual có tác dụng ko định nghĩa lại hàm khi ép kiểu
