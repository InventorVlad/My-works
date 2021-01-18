#include <iostream>
using namespace std;

void Num(int& x) {
	x++;
}

int Num1(int x) {
	x++;
	return x;
}

int main() {
	int b,i;
	int var = 0;
	var = var + 1;
	var++;
	int& a = var;
	a++;
	Num(var);
	b = Num1(var);
	var = b;
	for (i = 0; i != 1; i++) {
		var = var + 1;
	}
	while (var < var + 1) {
		var = var + 1;
		break;
	}
	cout << var << endl;

	return 0;
}

