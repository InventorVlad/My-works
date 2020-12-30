#include <iostream>
using namespace std;

int lvl=0, lvl1, qantity = 3;

int Life() {
		if (lvl1 > lvl + 10) {
			qantity = qantity - 1;
			cout << "Прыжок на такую высоту невозможен,вы недопрыгнули и остались на прежнем месте, у вас осталось " << qantity << " жизней" << endl;
			lvl1 = lvl;
		}
		else if (lvl1 < lvl - 10) {
			qantity = qantity - 1;
			cout << "Вы упали и вас отправили на предыдущую точку,у вас осталось " << qantity << " жизней" << endl;
			lvl1 = lvl;
		}
		if (qantity == 0)
			lvl1 = 40;
	    return qantity;

}

void jump() {
	cout << "Прыжок вверх" << endl;
	qantity=Life();
	lvl = lvl1;
}

void zero() {
	cout << "Идем дальше" << endl;
	lvl = lvl1;
}

void fall() {
	cout << "Прыжок вниз" << endl;
	qantity = Life();
	lvl = lvl1;
}

int main() {
	setlocale(0, "Rus");
	cout << "Здравствуйте.Вы играете в новую игру,суть которой заключается в том,что если следующая ячейка находится ниже текущей, то персонаж падает, если выше – прыгает.Выше и ниже 10 блоков прыгать нельзя.Удачи" << endl;
	while (lvl < 30) {
		cin >> lvl1;
		if (lvl1 > lvl) {
			jump();
		}
		else if (lvl1 == lvl) {
			zero();
		}
		else {
			fall();
		}


	}
}