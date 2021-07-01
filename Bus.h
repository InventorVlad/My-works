#pragma once
#include "Transport.h"
class Bus :public Transport
{
private:
	int number_of_seats;
	string for_whom;
	bool is_double_decker;
public:
	Bus(int gov_number, string model, string color, int year, int number_of_seats, string for_whom, bool is_double_decker) : Transport(gov_number, model, color, year),
		number_of_seats(number_of_seats),
		for_whom(for_whom),
		is_double_decker(is_double_decker)
	{}
	Bus() {};
	virtual void Print() override {
		PRINT(gov_number);
		PRINT(model);
		PRINT(color);
		PRINT(year);
		PRINT(number_of_seats);
		PRINT(for_whom);
		PRINT(is_double_decker);
		LINE;
	}
};
