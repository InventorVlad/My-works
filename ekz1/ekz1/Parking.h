#pragma once
#include "_import.h"
#include "Transport.h"

class Parking
{
public:
	Parking(string name, int number_of_seats):
		name(name),
		number_of_seats(number_of_seats)
	{}
	Parking() {

	}

	/*void SortTransports() {
		for (auto& item : transport) {
			sort(transport.begin(), transport.end(), item->GetGovNumber());
		}
	}*/

	vector <unique_ptr<Transport>>& GetTransport() {
		return transport;
	}

	

private:
	string name;
	int number_of_seats;
	vector <unique_ptr<Transport>> transport;
};

