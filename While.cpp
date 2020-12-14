#include <iostream>
#include<windows.h>
using namespace std;

int main()
{
	setlocale(0, "Rus");
	int a, exit = 0;
	while (exit != 1) {
		char name[256];
		cout << "1-Продолжить" << endl;
		cout << "2-Новая игра" << endl;
		cout << "3-Загрузка сохранения" << endl;
		cout << "4-Выйти" << endl;
		cout << "5-Настройки" << endl;
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
				break;
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
		case 5:
		{
			int b;
			cout << "Здесь вы можете выбрать настройки графики \n \n" << endl;
			cout << "1-Низкая графика" << endl;
			cout << "2-Средняя графика" << endl;
			cout << "3-Высокая графика" << endl;
			cout << "4-Ультра" << endl;
			cin >> b;
			switch (b)
			{
			case 1:
			{	
			     cout << "Вы выбрали низкую графику \n \n" << endl;
				 Sleep(2000);
				 break;
			}
			case 2:
			{
				cout << "Вы выбрали среднюю графику \n \n" << endl;
				Sleep(2000);
				break;
			}
			case 3:
			{
				cout << "Вы выбрали высокую графику \n \n" << endl;
				Sleep(2000);
				break;
			}
			case 4:
			{
				cout << "Вы выбрали УУУУльтра. Не забудьте купить RTX 3090 \n \n" << endl;
				Sleep(2000);
				break;
			}
			default:
			{	
				cout << "Вы промахнулись,такого варианта графики нет,попробуйте еще раз \n \n"<<endl;
				Sleep(2000);
				break;
			}
			}
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
