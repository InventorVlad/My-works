﻿#include <iostream>
using namespace std;

/*int main() {
	int a = 10;
	int* p = &a;
	string* d = new string("Hello world");
	int* p_d = new int (a);
	cout << a << endl;
	cout << *p << endl;
	cout << *p_d << endl;
	a = 20;
	cout << *p_d << endl;
	cout << *d << endl;
	delete d;
	string c = ("Hello");
	d = &c;
	cout << *d << endl;
}*/

string* foo() {
	string* hello1;
	hello1 = new string ("Hello world");
	return hello1;
}


int main() {
	string* a = foo();
		cout << *a << endl;
}