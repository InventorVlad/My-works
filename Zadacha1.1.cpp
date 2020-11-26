#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Подойти к  методисту" << endl;
	cout << "Ввести номер кабинета" << endl;
	int nomer = 0;
	cin >> nomer;
	cout << "Далее вы подошли к вахтеру" << endl; 
	cout << "Методист сказал,что номер:" << nomer << "свободен,дайте ключи" << endl;
	cout << "Вы довольные с ключами от" << nomer << "идете домой" << endl;
	return 0;

}
