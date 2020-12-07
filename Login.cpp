#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(0, "Rus");
	string login("Vlad"),oldlogin("Vlad1"),yourlogin;
	cin >> yourlogin;
	if (login == yourlogin)
		cout << "Приветствуем!" << endl;
	else if (yourlogin == oldlogin)
		cout << "Логин был изменен" << endl;
	else
		cout << "Такого логина не существует" << endl;
}	
