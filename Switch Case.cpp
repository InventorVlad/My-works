#include <iostream>
using namespace std;

int main() {
	setlocale(0, "Ru");
	int relation, intellect = 6;

	cout << "1.-Давай торговать" << endl;
	cout << "2.-Я вырезал твою родную деревню" << endl;
	cout << "3.-Слухи" << endl;
	cout << "4.-Нет,ничего не надо,досвидания" << endl;
	cin >> relation;

	switch (relation)
	{
	case 1:
	{
		if (intellect > 5)
			cout << "А давай,у меня есть хорошие предложения для тебя" << endl;
		else
			cout << "У тебя слабо прокачан интеллект,ничего не выйдет" << endl;
		break;
	}
	case 2:
	{
		int force = 10;
		if (force < 6)
			cout << "А ну иди сюда,падаль. Я тебя уничтожу.Тваааарь" << endl;
		else
			cout << "Эта собака мощная,но у меня есть хорошее средство для его мучительной,долгой смерти." << endl;
		break;
	}
	case 3:
	{
			cout << "Ооо. Мне есть что сказать" << endl;
		break;
	}
	case 4:
	{
		cout << "Ну и иди тогда отсюда" << endl;
		break;
	}
	default:
	{
		cout << "Ты шо дурак???" << endl;
	}
	}
}
