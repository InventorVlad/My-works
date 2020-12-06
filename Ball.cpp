#include <iostream>
using namespace std;

int main() {
	setlocale(0, "Ru");
	int lvl, lvl1, quantity=3;
	lvl = 0;

	while (lvl < 15)
	{
		cin >> lvl1;
		if (lvl1 < lvl + 10) {
			if (lvl1 == lvl)
				cout << "Идем дальше" << endl;
			else if (lvl1 > lvl) {
				cout << "Прыжок в верх" << endl;
				lvl = lvl1;
			}
			else if (lvl1 < lvl - 10) {
				cout << "Слишком низко" << endl;
				quantity = quantity-1;
				cout << "У вас осталось " << quantity << " попыток" << endl;
			}
			else {
				cout << "Прыжок вниз" << endl;
				lvl = lvl1;
			}
		}else{
			cout << "Слишком высоко" << endl;
			quantity = quantity-1;
			cout << "У вас осталось " << quantity << " попыток" << endl;
		}
		if (quantity == 0) {
			cout << ("Вы проиграли") << endl;
			lvl = 16;
		}
		else {
			lvl = lvl;
		}
	}
	
}