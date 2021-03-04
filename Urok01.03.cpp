#include <iostream>
using namespace std;

string* foo() {
	string* hello1;
	hello1 = new string ("Hello world");
	return hello1;
}


int main() {
	string* a = foo();
		cout << *a << endl;
}
