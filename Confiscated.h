#pragma once
#include "Transport.h"
class Confiscated
{
private:
	int gov_num;
	string why;
	int date;
public:
	Confiscated(int gov_num, string why, int date):
		gov_num(gov_num),
		why(why),
		date(date)
	{}

	void Print() {
		PRINT(gov_num);
		PRINT(why);
		PRINT(date);
	}
	/*void AddConfiscated(int gov_num) {
		v.pushback(Confiscated(p.transport[0].getNum))

		}

	}

	void DeleteConfiscated(Transport transp) {

	}*/


};
