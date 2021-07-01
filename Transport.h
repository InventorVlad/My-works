#pragma once
#include "_import.h"
class Transport
{
protected:
	int gov_number;
	string model;
	string color;
	int year;

public:
	Transport(int gov_number, string model, string color, int year) :
		gov_number(gov_number),
		model(model),
		color(color),
		year(year)
	{}

	Transport() {}
	virtual void Print() = 0;


	int GetGovNumber() {
		return gov_number;
	}

	string GetColor() {
		return color;
	}


};