//Tính đóng gó: đóng gói class ko public ra bên ngoài
//Cái gì liên quan tới thuộc tính thì phải che dấu lại

#include<iostream>
#include<string>

class Woman
{
public:
	//Hàm khởi tạo, tự động khởi tạo khi gọi 1 class
	Woman(std::string fn, int a)
	{
		std::cout << "Create a new woman\n";

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
private:
	float weight;
	std::string fullname ;
	int age ;
};

int main()
{
	int x = 10;
	Woman* hariwon = new Woman("Harriwon", 35); //Khai báo cấp phát động
	//hariwon->introduce();
	hariwon->setAge(36);
	std::cout << hariwon->getAge();

	return 0;
}
