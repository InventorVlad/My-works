
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	setlocale(0, "Ru");
	cout << "Введите имя персонажа" << endl;
	string name;
	cin >> name;
	cout << name << " вы получили квест по зачистке пещеры от гоблинов" << endl;
 }

