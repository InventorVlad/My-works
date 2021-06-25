#pragma once
#include <iostream>
#include <string>
using namespace std;

class dPrinter {
	string type;
	int cost;
	string name;
	int power;
	int extruders;
	bool state = true;
public:
	dPrinter(string name, string type, int cost, int extruders = 1);
	dPrinter();
	void print();
	void modificate(int extruders, int qantity, int extruder_cost);
	void error();

};

dPrinter::dPrinter(string name, string type, int cost,int extruders = 1) {
	this->name = name;
	this->type = type;
	this->cost = cost;
	this->power = power;
}

void dPrinter::print() {
	cout << name << type << cost << power << endl;
}

void dPrinter::modificate(int extruders, int qantity, int extruder_cost) {
	this->extruders = extruders + qantity;
	cost = cost + extruder_cost * qantity;
}

	void dPrinter::error() {
		state = false;

	}





}

