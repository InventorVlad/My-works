#include "Bike.h"
#include "Bus.h"
#include "Parking.h"
#include "Car.h"
#include "Сonfiscated.h"

//void ReadTranport(vector<unique_ptr<Transport>>& v) {
//	string temp;
//	vector<string>p;
//	ifstream file("transports.csv");
//	int n = CountInFile("transports.csv");
//	for (int i = 0; i < n; i++) {
//		getline(file, temp);
//		p = split(temp, ';');
//		if (p[0] == "Car")
//			v.push_back(unique_ptr<Transport>(new Car(
//				stoi(p[1]), p[2], p[3], stoi(p[4]), p[5], stoi(p[6]), p[7]
//			)));
//		else v.push_back(unique_ptr<Transport>(new Bus(
//			stoi(p[1]), p[2], p[3], stoi(p[4]), stoi(p[5]), p[6], stoi(p[7])
//		)));
//		v.push_back(unique_ptr<Transport>(new Bike(
//			stoi(p[1]), p[2], p[3], stoi(p[4]), p[5], stoi(p[6]), stoi(p[7])
//		)));
//	}
//	file.close();
//}

void ReadTranport(vector<unique_ptr<Transport>>& v) {
	string temp;
	vector<string> p; //properties
	ifstream file("transports.csv");
	for (int i = 0; i < CountInFile("transports.csv"); i++) {
		getline(file, temp);
			p = split(temp, ';');
			if (p[0] == "Car") {
				v.push_back(unique_ptr<Transport>(
					new Car(
						stoi(p[1]), p[2], p[3], stoi(p[4]), p[5], stoi(p[6]), p[7]
					)));
			}
			else if (p[0] == "Bus") {
				v.push_back(unique_ptr<Transport>(new Bus(
					stoi(p[1]), p[2], p[3], stoi(p[4]), stoi(p[5]), p[6], p[7]
				)));
			}else{
				v.push_back(unique_ptr<Transport>(new Bike(
					stoi(p[1]), p[2], p[3], stoi(p[4]), p[5], stoi(p[6]), stoi(p[7])
			    )));
						}


	}
	file.close();
}

void SearchNumberTransport(vector<unique_ptr<Transport>>& v) {
	int number;
	cout << "Enter the vehicle number: " << endl;
	cin >> number;
	for (auto& item : v) {
		if (number == item->GetGovNumber()) {
			cout << "The number you entered has been found." << endl;
		}
		else {
			cout << "Error! There is no such number!" << endl;
		}
	}
}

void ListTransportColor(vector<unique_ptr<Transport>>& v) {
	for (auto& item : v) {
		cout << "Color: " << item->GetColor() << endl;
	}
}

int main() {
	setlocale(0, "rus");
	vector<unique_ptr<Transport>> transports;
	ReadTranport(transports);
	for (auto& item : transports) item->Print();
	Parking p;
	p.GetTransport();

}