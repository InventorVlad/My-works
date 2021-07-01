#pragma once
#include "_import.h"
#include "Transport.h"

class Parking
{
private:
	string name;
	int number_of_seats;
public:
	Parking(string name, int number_of_seats) :
		name(name),
		number_of_seats(number_of_seats)
	{}

	Parking() {}
	int get_size() {
	return number_of_seats;
	}

	void changer(string new_name,int new_seats){ 
		name = new_name;
		number_of_seats = new_seats;
	}

	void check_name() {
		cout << name << "\n" << number_of_seats << endl;
	}
};
