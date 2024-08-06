//#include <iostream>
//#include<string>
//
//std::string greeting(std::string name)
//{
//	std::string s= "Hello I am "+name;
//	return s;
//}
//
//struct Body
//{
//	float weight;
//	int size0fBody[3];
//};
//int main()
//{
//	float age = 20;
//	std::cout << greeting("Thanh") << "\n";
//	if (age >= 18)
//	{
//		std::cout << "du tuoi nvqs\n";
//
//	}
//	else
//		std::cout << "Chua du tuoi nvqs";
//	return 0;
//}

#include<iostream>
#include<string>
#include<vector>
int x = 10;
void abc()
{
	
}
struct BodySize
{
public:
	std::vector<int> size3ring;
	float weight;
};
class Message
{
public:
	std::string content;
	std::string sender;
};
class Woman
{
public:
	static void what()
	{
		std::cout << "Phu nu la de yeu thuong .\n";
		std::cout << "There are " << number0fwoman << " woman in program now";
	}
	static int number0fwoman;
	//Khởi tạo 1 hàm ko có tham số, hàm cùng tên nhưng khác tham số
	Woman()
	{
		fullname = "Unknow";
		age = 0;
	}
	//Hàm khởi tạo, tự động khởi tạo khi gọi 1 class
	Woman(std::string fn, int a)
	{
		std::cout << "Create a new woman\n";
		fullname = fn;
		age = a;
		number0fwoman++;
		//fullname = "Hariwon";
	}

	std::string fullname;
	BodySize bodySize;
	int age;
	void MakeUp()
	{}
	void introduce()
	{
		std::cout << "Hi! My name is " << fullname << ".\n";
		std::cout << "Now I am " << age << " years old. \n";
	}
	//Message* introduce( std::string language, bool isFull = true)// Khong truyen tham so thi tham so mac dinh la true, tham so mac dinh de o sau
	//{
		//Message *msg = new Message;
		//if (language == "Vietnam")
		//{
		//	msg->content = "Xin chao toi la phu nu\n";
		//	if (isFull)
		//	{
		//		msg->content+= "Toi rat xinh dep\n";
		//	}
		//}
		//else 
		//{
		//	msg->content =  "Hi I am a woman\n";
		//	if (isFull)
		//	{
		//		msg->content = "I am very beautifyl\n";
		//	}
		//}
		
	//	return msg;
	//}
	//Cùng tên hàm nhưng tham số truyền vào khác nhau cho ra kết quả khác nhau
	/*Message* introduce(int count)
	{
		Message* msg = new Message;
		for (int i = 0; i < count; i++)
		{
			msg->content += "Hello" +std::to_string(i)+ "\n";
		}
		return msg;
	}*/
	//hàm huỷ, không có hàm này vẫn tự huỷ Object
	// Viết tường minh hàm distructer để huỷ các biến động ( ví dụ như trong Public có con trỏ chỉ đến 1 Object khác 
	~Woman()
	{
		std::cout << "Deleted a new woman \n";
	}
private:

};
//Biến global nên phải khai báo global
int Woman::number0fwoman = 0;

int main()
{
	int x = 10;
	//Woman ngoc_tring;
	Woman* hariwon = new Woman("Harriwon", 35); //Khai báo cấp phát động
	//Woman::what();
	hariwon->introduce();
	Woman* ngoctrinh = new Woman("ngoc trinh", 30);
	Woman::what();
	ngoctrinh->introduce();
	delete hariwon; // chỉ có tác dụng với cấp phát động
	delete ngoctrinh;
	
	/*std::cout << msg->content;*/
	//hariwon->fullname = "Hariwon";
	//hariwon->age = 35;
	//hariwon->bodySize.weight = 50;
	//std::cout << "there is a woman name " << hariwon->fullname<<"\n";
	//hariwon->introduce();
	return 0;
}
//static: khi viết hàm static void what(), chỉ cần khai báo Woman::what() thay vì hariwon->what()
//static trong class nào chỉ gọi đến các biến không phụ thuộc vào class đó