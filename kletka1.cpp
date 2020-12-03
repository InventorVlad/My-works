#include <iostream>
using namespace std;

int main() {
	setlocale(0, "Ru");
	int lvl, lvl1;
	lvl = 0;

	while (lvl < 15)
	{
		cin >> lvl1;
		if (lvl1 < lvl + 10) {
			if (lvl1 == lvl)
				cout << "Идем дальше" << endl;
			else if (lvl1 > lvl) {
				cout << "Прыжок в верх" << endl;
			}
			else {
				cout << "Прыжок вниз" << endl;
			}
			lvl = lvl1;
		}
		else if (lvl1 > lvl - 10) {
			cout << "Слишком высоко" << endl;
		}else{
			cout << "Слишком низко" << endl;
		}
	}
	
}

