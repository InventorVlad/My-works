#include "Bike.h"
#include "Bus.h"
#include "Parking.h"
#include "Car.h"
#include "Confiscated.h"

void ReadTransport(vector<unique_ptr<Transport>>& v,int size_parking) {
	string temp;
	vector<string> p;
	ifstream file("transports.csv");
		for (int i = 0; i < CountInFile("transports.csv"); i++) {
			if (v.size() < size_parking){
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
					stoi(p[1]), p[2], p[3], stoi(p[4]), stoi(p[5]), p[6], stoi(p[7])
				)));
			}
			else {
				v.push_back(unique_ptr<Transport>(new Bike(
					stoi(p[1]), p[2], p[3], stoi(p[4]), p[5], stoi(p[6]), stoi(p[7])
				)));
			}
		}else {}
	}
	

	
	file.close();
}

void add_transport(vector<unique_ptr<Transport>>& v, int size_parking) {
	ofstream file;        
	file.open("transports.csv"); 
	if (file.is_open())
	{
		int write;
		cin >> write;
		file << "Car; 549; Toyota Camry 50; black; 2017; sedan; 4; benz" <<endl;
	}
	string temp;
	vector<string> p;
	ifstream file1("transports.csv");
	for (int i = 0; i < CountInFile("transports.csv"); i++) {
		if (v.size() < size_parking) {
			getline(file1, temp);
			p = split(temp, ';');
			if (p[0] == "Car") {
				v.push_back(unique_ptr<Transport>(
					new Car(
						stoi(p[1]), p[2], p[3], stoi(p[4]), p[5], stoi(p[6]), p[7]
					)));
			}
		}
			else {
			cout<<"Error"<<endl;}
		}
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
	cout << "Choice option\n 1-Check Parking name and places\n 2-check places, write down if available and check out a list\n3-Change parking\n4-add new transport" << endl;
	int choice;
	cin >> choice;
	vector<unique_ptr<Transport>> transports;
	Parking Zheka("У Жени", 3);
	switch (choice) {
	case 1:
		Zheka.check_name();
		break;
	case 2:
		ReadTransport(transports, Zheka.get_size());
		for (auto& item : transports) item->Print();
		break;
	case 3:
		Zheka.changer("Женя", 25);
		Zheka.check_name();
		break;

	case 4:
		add_transport(transports, Zheka.get_size());
		ReadTransport(transports, Zheka.get_size());
		for (auto& item : transports) item->Print();
		break;



	}
}
