#pragma once
#include "Transport.h"
class Car:public Transport
{
public:
	Car(int gov_number, string model, string color, int year, string type, int number_of_seats, string type_of_fuel) : Transport(gov_number, model, color, year),
		type(type),
		number_of_seats(number_of_seats),
		type_of_fuel(type_of_fuel)
	{}
	Car(){}

	virtual void Print() override {
		PRINT(gov_number);
		PRINT(model);
		PRINT(color);
		PRINT(year);
		PRINT(type);
		PRINT(number_of_seats);
		PRINT(type_of_fuel);
		LINE;
	}
private:
	string type;
	int number_of_seats;
	string type_of_fuel;
};

