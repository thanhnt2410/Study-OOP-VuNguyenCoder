// Tính trừu tượng hoá:
// Mọi thứ phức tạp hãy tạo cho nó một cái hàm đặt tên có ý nghĩa bên trong Class để nó có thể hoàn thành các công việc
#include<iostream>
#include<string>

class Woman
{
public:
	//Hàm khởi tạo, tự động khởi tạo khi gọi 1 class
	Woman(std::string fn, int a, int w, float h)
	{
		fullname = fn;
		age = a;
		weight = w;
		height = h;
	}
	void introduce()
	{
		std::cout << "Hi! My name is " << fullname << ".\n";
		std::cout << "Now I am " << age << " years old. \n";
	}
	void setAge(int a)
	{
		age = a;
	}

	int getAge()
	{
		return age;
	}
	float getWeight()
	{
		return weight;
	}
	float getHeight()
	{
		return height;
	}
private:
	float weight;
	std::string fullname;
	int age;
	float height;
};

class HealthChecker
{
public:
	void check(Woman* woman)
	{
		weight = woman->getWeight();
		height = woman->getHeight();
		//......caculate.......
		bloodPressure = 130; //getDevice()
		heartBeat = 80; //getDevice()
	}
	std::string getResult()
	{
		float bmi = weight / (height * height);
		if (bmi >= 18.5 && bmi <= 24.9 &&bloodPressure>=120 &&bloodPressure<=140 && heartBeat >=60 && heartBeat <=100)
		{
			return "Nomal";
		}
		return "Abnormal";
	}
	
private:
	float weight;
	float height;
	int bloodPressure;
	int heartBeat;
};
int main()
{
	int x = 10;
	Woman* hariwon = new Woman("Harriwon", 33, 60, 1.65); //Khai báo cấp phát động
	HealthChecker* checker = new HealthChecker;
	checker->check(hariwon);
	std::string result = checker->getResult();
	std::cout << result;

	return 0;
}
