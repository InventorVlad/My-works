#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(0, "Ru");
	string name, age, surname;
	cout << "введите имя" << endl;
	cin >> name;
	cout << "введите фамилию" << endl;
	cin >> surname;
	cout << "введите возраст" << endl;
	cin >> age;
	cout <<"Ваше имя "<< name <<" "<< "Ваша фамилия "<< surname <<" "<<"Ваш возраст "<< age << endl;
	return 0;

}