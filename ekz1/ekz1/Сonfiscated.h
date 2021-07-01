#pragma once
#include "Transport.h"
class �onfiscated : public Transport
{
public:
	�onfiscated(int gov_number, string model, string color, int year, int gov_num, string why, int date) : Transport(gov_number, model, color, year),
		gov_num(gov_num),
		why(why),
		date(date)
	{}
	void Print() override {
		PRINT(gov_num);
		PRINT(why);
		PRINT(date);
	}
	void AddConfiscated(Transport transp) {
		
	}

	void DeleteConfiscated(Transport transp) {
		
	}  


private:
	int gov_num;
	string why;
	int date;

};

