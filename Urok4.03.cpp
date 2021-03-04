#include <iostream>
using namespace std;

/*int main() {
	setlocale(0, "rus");
	int* a=new int;
	cin >> *a;
	if (*a > -1 * (*a)) {
		cout << *a << endl;
	}
	else {
		cout << -1 * (*a) << endl;
	}
	delete a;
	a = 0;



}*/

int* mod(int*a) {
	if (*a > -1 * (*a)) {
		return a;
	}
	else {
		*a = -1 * (*a);
		return a;
	}

}

int main() {
	int* a=new int;
	cin >> *a;
	mod(a);
	cout << *a << endl;
	delete a;
	a = 0;
}
