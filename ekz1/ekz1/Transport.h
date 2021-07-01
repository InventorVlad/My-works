#pragma once
#include "_import.h"
class Transport
{
public:
	Transport(int gov_number, string model, string color, int year):
		gov_number(gov_number),
		model(model),
		color(color),
		year(year)
	{}
	Transport() {}
	virtual void Print(){
		PRINT(gov_number);
		PRINT(model);
		PRINT(color);
		PRINT(year);
	}
public:
	int GetGovNumber() {
		return gov_number;
	}
	string GetColor() {
		return color;
	}



protected:
	int gov_number;
	string model;
	string color;
	int year;
};

