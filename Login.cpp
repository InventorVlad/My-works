#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(0, "Rus");
	string login;
	cin >> login;
	if (login == "Vlad")
		cout << "Приветствуем!" << endl;
	else if (login == "Vlad1")
		cout << "Логин был изменен" << endl;
	else
		cout << "Такого логина не существует" << endl;
}
	
