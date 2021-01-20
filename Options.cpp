#include <iostream>
using namespace std;

void Num(int& x) {
	x++;
}

int Num1(int x) {
	x++;
	return x;
}

void Num2(int* x) {
	*x=*x+1;
}

int main() {
	int b, i;
	int var = 0;
	var = var + 1;
	var++;
	int& a = var;
	a++;
	Num(var);
	b = Num1(var);
	var = b;
	Num2(&var);
	for (i = 0; i != 1; i++) {
		var = var + 1;
	}
	while (var < var + 1) {
		var = var + 1;
		break;
	}
	if (var > 1) {
		var++;
	}
	switch (var)
	{
	default:
		var++;
		break;
	}
	cout << var << endl;

	return 0;
}
