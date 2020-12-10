#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "Rus");
	int a, exit=0;
	while (exit != 1) {
	char name[256];
	cout << "1-Продолжить" << endl;
	cout << "2-Новая игра" << endl;
	cout << "3-Загрузка сохранения" << endl;
	cout << "4-Выйти" << endl;
	cin >> a;
		switch (a) {
		case 1:
		{
			cout << "Вы заходите в последнее сохранение" << endl;
			exit = 1;
			break;
		}
		case 2:
		{
			cout << "Введите имя персонажа" << endl;
			cin.getline(name, 256, ';');

			cout << "Конгратулэйшен. Вы начинаете новую игру с именем " << name << endl;
			exit = 1;
			break;
		}
		case 3:
		{
			cout << "1-Перед началом битвы с Дрыклабрусом" << endl;
			cout << "2-После победы над Дрыклабрусом" << endl;
			cout << "3-Закупка у Олдриха" << endl;
			int upload;
			cin >> upload;
			switch (upload) {
			case 1:
			{
				cout << "Вы загружаетесь перед началом битвы с Дрыклабрусом" << endl;
				break;
			}
			case 2:
			{
				cout << "Вы загружаетесь после победы над Дрыклабрусом" << endl;
				break;
			}
			case 3:
			{
				cout << "Вы загружаетесь у Олдриха" << endl;
			}
			default:
			{
				cout << "Ты что наделал" << endl;
				break;
			}
			}
			exit = 1;
			break;
		}
		case 4:
		{
			cout << "Подтвердите выход.1-Да,Любое другое число-Нет" << endl;
			cin >> exit;
			if (exit == 1)
				cout << "Вы выходите..." << endl;
			else
				cout << "Вы остаетесь..." << endl;
			break;
		}
		default:
		{
			cout << "Ты куда нажал???" << endl;
			break;
		}




		}
	}
}

