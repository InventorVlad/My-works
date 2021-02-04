#include <iostream>
using namespace std;

const int ALA_KIZ = 25000;
const int ALA_MOS = 35000;
const int ALA_ODE = 45000;
const string name = "1234";

void cashback(int& cashback) {
	cashback = cashback / 100 * 5;
	cout << "Кэшбэк с этого полета составит " << cashback << endl;
}

void choice(int& storage,int& cashback1) {
	int choice;
	int final_cost;
	cout << "У вас на счету имеется" << storage << " тг \nВы можете либо 1-продолжить их накапливать 2-Потратить" << endl;
	cin >> choice;
	if (choice == 1) {
		cout << "Вы выбрали вариант с продолжением накопления бонусов" << endl;
		final_cost = cashback1;
		cashback(cashback1);
		storage = storage + cashback1;
		cashback1 = final_cost;
		cout << "Общее количество накопленных бонусов " << storage << endl;
		cout << "Конечная стоимость " << cashback1;
	}
	else{
		cout << "Вы выбрали вариант потратить бонусы на путешествие" << endl;
		final_cost = cashback1 - storage;
		storage = final_cost;
		cashback(storage);
		cashback1 = final_cost;
		cout << "Конечная стоимость составляет " << cashback1 << "\nА общая сумма накоплений составляет " << storage << endl;
}
}

void login(bool& log) {
	int choice;
	cout << "1-Ввести логин \n2-Войти как гость " << endl;
	cin >> choice;
	if (choice == 1) {
		string name1;
		cin >> name1;
		if (name1 == name) {
			log = true;
			cout << "Вы успешно вошли в свой аккаунт" << endl;
		}
		else {
			cout << "Неверные данные. Вход произойдет как гость" << endl;
			log = false;
		}
	}
	else {
		cout << "Вы вошли как гость" << endl;
		log = false;
	}
}



int main() {
	setlocale(0, "Rus");
	int direction;
	int cost;
	int storage = 1000;
	int final_cost;
	int exit = 1;
	bool log;

	cout << "Здравствуйте! Вас приветствует авиакомпания Летающая Белка! \n Для начала покупок вам нужно либо войти в свой аккаунт,либо войти как гость(на аккаунте гостя отсутствует накопительная система" << endl;
	login(log);
	if (log == true) {
		while (exit != 2) {
			cout << "Выберите направление пути. Имеется 3 рейса:\n 1-Алматы-Кызылорда,стоимость 25000тг \n 2-Алматы-Москва,стоимость 35000тг \n 3-Алматы-Одесса,стоимость 45000тг \n 4-Выход" << endl;
			cin >> direction;
			switch (direction) {
			case 1:
				cout << "Вы выбрали направление Алматы-Кызылорда. Приятного полета!" << endl;
				cost = ALA_KIZ;
				choice(storage, cost);
				cout << " Вы можете либо 1-остаться на сайте и продолжить покупки,либо 2-выйти с сайта" << endl;
				cin >> exit;
				break;
			case 2:
				cout << "Вы выбрали направление Алматы-Москва. Приятного полета!" << endl;
				cost = ALA_MOS;
				choice(storage, cost);
				cout << " Вы можете либо 1-остаться на сайте и продолжить покупки,либо 2-выйти с сайта" << endl;
				cin >> exit;
				break;
			case 3:
				cout << "Вы выбрали направление Алматы-Одесса. Приятного полета!" << endl;
				cost = ALA_ODE;
				choice(storage, cost);
				cout << " Вы можете либо 1-остаться на сайте и продолжить покупки,либо 2-выйти с сайта" << endl;
				cin >> exit;
				break;
			default:
				exit = 2;
				break;
			}
		}
	}
	else {
		while (exit != 2) {
			cout << "Выберите направление пути. Имеется 3 рейса:\n 1-Алматы-Кызылорда,стоимость 25000тг \n 2-Алматы-Москва,стоимость 35000тг \n 3-Алматы-Одесса,стоимость 45000тг \n 4-Выход" << endl;
			cin >> direction;
			switch (direction) {
			case 1:
				cout << "Вы выбрали направление Алматы-Кызылорда. Приятного полета!" << endl;
				cost = ALA_KIZ;
				cout << "Вы можете либо 1-остаться на сайте и продолжить покупки,либо 2-выйти с сайта" << endl;
				cin >> exit;
				break;
			case 2:
				cout << "Вы выбрали направление Алматы-Москва. Приятного полета!" << endl;
				cost = ALA_MOS;
				cout << "Вы можете либо 1-остаться на сайте и продолжить покупки,либо 2-выйти с сайта" << endl;
				cin >> exit;
				break;
			case 3:
				cout << "Вы выбрали направление Алматы-Одесса. Приятного полета!" << endl;
				cost = ALA_ODE;
				cout << "Вы можете либо 1-остаться на сайте и продолжить покупки,либо 2-выйти с сайта" << endl;
				cin >> exit;
				break;
			default:
				exit = 2;
				break;
			}


		}



	}
}