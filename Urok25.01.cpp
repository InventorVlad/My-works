﻿#include <iostream>
#include <windows.h>
using namespace std;

int ingame_balance,cash;
void generous_offer();

void check_cash() {
	int choice, choice1;
	if (ingame_balance < 500) {
		cout << "Оу,у вас проблемы с финансовым положением. Это нужно срочно исправить,иначе все может рухнуть" << endl;
		cout << "Мы очень хотим вам помочь, поэтому даем вам возможность пополнить баланс с дополнительным игровым бонусом.Стоимость предложения всего лишь 2290 тг" << endl;
		cout << "1-Купить и радоваться покупке \n Отказаться и пропустить столь щедрое предложение" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			generous_offer();
			break;
		default:
			cout << "Вы уверены в своих действиях? \n 1-Да \n 2-Нет" << endl;
			cin >> choice1;
			do {
				cout << "Вы совершаете огромную ошибку" << endl;
				cout << "Мы даем вам последний шанс" << endl;
				cout << "Пополнить баланс \n 1-да \n 2-нет" << endl;
				cin >> choice1;
			} while (choice1 != 1);
			generous_offer();
			break;
			
		}

	}
}

void generous_offer() {
	string bank;
	cout << "Введите банковские реквизиты" << endl;
	cin >> bank;
	Sleep(3000);
	cout << "Операция прошла успешно.Вам начислили ваши приобретения" << endl;
	ingame_balance = ingame_balance + 2300;
}

int main() {
	ingame_balance = 300;
	setlocale(0, "rus");
	check_cash();
	cout << ingame_balance << endl;
}