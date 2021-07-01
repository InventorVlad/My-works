#pragma once
#include "Transport.h"
class Bike :public Transport
{
private:
	string type;
	int horsepower;
	int weight;
public:
	Bike(int gov_number, string model, string color, int year, string type, int horsepower, int weight) : Transport(gov_number, model, color, year),
		type(type),
		horsepower(horsepower),
		weight(weight)
	{}
	Bike() {}
	virtual void Print() override {
		PRINT(gov_number);
		PRINT(model);
		PRINT(color);
		PRINT(year);
		PRINT(type);
		PRINT(horsepower);
		PRINT(weight);
	}
};