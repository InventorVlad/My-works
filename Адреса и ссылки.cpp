/*#include <iostream>
using namespace std;
int var = 10;

void foo(int& x);

int main() {
	int var=10;
	cout << "Before foo: var=" << var << endl;
	foo(var);
	cout << "after foo: var =" << var << endl;
	cout << "Ref:" << &var << endl;

	return 0;
}
void foo(int& x) {
	x +=10;
}*/

#include <iostream>
using namespace std;

void swap(int& x, int& y) {
	int c;
	c = y;
	y += x - y;
	x = x + c - x;

}

int main() {
	int vasya_score = 500;
	int my_score = 100;
	swap(vasya_score,my_score);
	cout << my_score << endl;
	cout << vasya_score << endl;


}

