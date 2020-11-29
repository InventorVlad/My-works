#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	setlocale(0, "Ru");
	int key;
	cout << "Введите шестизначный ключ" << endl;
	cin >> key;
	if (key < 999999 && key>99999) {
		cout << "подождите пожалуйста" << endl;
		cout << "Вы должны были получить красивую картинку,но программист еще не разобрался в этой теме. Представьте единорога на фоне неба.Спасибо" << endl;
		cout << "..." << endl; 
		Sleep(8000);
		cout << "Была типа проверка и вы получаете доступ. Юху" << endl;
	}
	else {
		cout << "Вы ввели неправильный ключ,попробуйте заново" << endl;
	}
}
