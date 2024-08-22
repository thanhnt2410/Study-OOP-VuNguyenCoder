#pragma once
#include<string>
#include<iostream>
class Vehicle
{
public:
	Vehicle(std::string name);
	virtual void run();

protected:
	std::string modelName;
	//Person* owner;
	std::string ownerName;
	std::string license;
private:
};
