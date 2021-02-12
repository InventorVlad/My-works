#include <iostream>
#include <windows.h>
using namespace std;

void generous_offer(bool& pay);

void check_cash(const int& ingame_balance, const int& real_cash, bool&pay) { //Сюда передаются данные о игровой валюте и деньгам на карте(здесь все понятно) и оплате(Если человек выберет пополнить счет,то выполниться функция generous_offer,которая присвоит pay-true и уже в дальнейшем в main произойдет проверка и если pay-true,начисляться валюта)
	int choice, choice1;
	if (ingame_balance < 500 || real_cash>2400) {
		cout << "Оу,у вас проблемы с финансовым положением. Это нужно срочно исправить,иначе все может рухнуть" << endl;
		cout << "Мы очень хотим вам помочь, поэтому даем вам возможность пополнить баланс с дополнительным игровым бонусом.Стоимость предложения всего лишь 2290 тг" << endl;
		cout << "1-Купить и радоваться покупке \n2-Отказаться и пропустить столь щедрое предложение" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			generous_offer(pay);
			break;
		default:
			cout << "Вы уверены в своих действиях? \n 1-Да \n 2-Нет" << endl;
			cin >> choice1;
			for(int i=0;i<4;i++){
				if (choice1 == 2) {
					generous_offer(pay);
					break;
				}
				else {
					cout << "Вы совершаете огромную ошибку" << endl;
					cout << "Мы даем вам последний шанс" << endl;
					cout << "Пополнить баланс \n 1-да \n 2-нет" << endl;
					cin >> choice1;
					if (choice1 == 1) {
						generous_offer(pay);
						break;
					}
					else {
						break;
					}
				}
			}
			

		}

	}
}

void generous_offer(bool& pay) { //Тут могла бы быть банковская проверка,но разработчик пока не знает как это сделать:(.Поэтому введите любые данные и оплата произойдет)
	string bank;
	cout << "Введите банковские реквизиты" << endl;
	cin >> bank;
	//Sleep(3000); Вроде бы вы говорили,что Sleep у вас не работает
	pay = true;
	cout << "Операция прошла проверку.Начисления прийдут в течении минуты" << endl;
}

void money(int& ingame_balance) { //единственная функция,которая пополняет игровой счет.
	ingame_balance = ingame_balance + 2300;
}

int main() {
	int ingame_balance=300;
	int real_cash = 2400;
	bool pay;
	setlocale(0, "rus");
	if (ingame_balance < 500 || real_cash>2400) {
		check_cash(ingame_balance, real_cash, pay);
		if (pay == true) {
			money(ingame_balance);
			cout << "Пополнение прошло успешно. На вашем счету " << ingame_balance << endl;
		}
		else {
			cout << "ВЫ ЕЩЕ ПОЖАЛЕЕТЕ!!!" << endl;
		}
	}
	else {
		cout << "Либо у вас слишком много игровой валюты и мы проверим не читер ли вы,либо вы бедны и на вашей карте нет денег" << endl;
	}
}
