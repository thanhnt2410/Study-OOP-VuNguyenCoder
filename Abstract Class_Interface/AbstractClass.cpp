
//------------------Abstract Class-------------------------
//Nếu hàm cha có 1 hàm bị xoá nội dung, thì các hàm con kế thừa từ hàm cha phải định nghĩa lại nội dung hàm đó
//Không khởi tạo đc Abstract class nhưng có thể làm con trỏ
//Class dẫn xuất nếu ko override lại hàm cơ sở thì Class con cũng coi là một Abstract Class
//--------------------Interface---------------------------
//Khi tất cả hàm trong class bị pure virtual function (= 0) thì sẽ nâng lên thanh Interface
#include<iostream>
#include<string>

class Vehicle		//<- Abstract Class do có 1 hàm = 0
{
public:

	virtual std::string getModelName() = 0;
	/*{
		return modelName;
	}*/
	virtual void setModelName(std::string name) = 0;
	/*{
		modelName = name;
	}*/
	virtual void run() = 0; //Xoá nội dung hàm, khi đáy lớp dẫn xuất phải định nghĩa

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

	std::string getModelName()
	{
		return modelName;
	}
	void setModelName(std::string name)
	{
		modelName = name;
	}
	void run()
	{
		std::cout << "a Car is running ...!\n";
	}
private:
	std::string ownerName;
	std::string name;
	std::string modelName;
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


int main()
{
	//Vehicle* vehicle = new Vehicle(); //error do hàm run() = 0
	Vehicle* vehicle_list[3];
	vehicle_list[0] = new Car();
	//vehicle_list[1] = new Truck();
	//vehicle_list[2] = new Motobike();
	for (int i = 0; i < 3; i++)
	{
		vehicle_list[i]->run();
	}
}

