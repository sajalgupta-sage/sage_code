#pragma once

class Vehicle
{
public:
	virtual void getType() = 0;
	Vehicle* createInstance(int);
};


class Bike :public Vehicle
{
	void getType();
};


class Car :public Vehicle
{
	void getType();
};