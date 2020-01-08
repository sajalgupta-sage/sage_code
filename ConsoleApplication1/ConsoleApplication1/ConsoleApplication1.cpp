#include"Header.h"
#include<iostream>

using namespace std;


void Bike::getType()
{
	cout << "I am of bike type" << endl;
}

void Car::getType()
{
	cout << "I am of Car type" << endl;
}

Vehicle* Vehicle::createInstance(int a)
{
	if (a == 1)
	{
		return new Bike();
	}
	else
	{
		return new Car();
	}
}