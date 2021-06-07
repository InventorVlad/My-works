#include<iostream>
using namespace std;

class tamagochi {
public:
	tamagochi(int id, string mood, string name);
	~tamagochi();
	void change_name(string name);
	void get_old();
	void damage();
	void heal();
	void get_sick();
	void starve();
	void feed();
	void moody();
	

private:
	string* name;
	int* id;
	int* age;
	string* mood;
	int hp;
	bool ill;
	bool hunger;


};

tamagochi::tamagochi(int id = 0, string mood="normal",string name) {
	this->id = new int (id);
	this->mood = new string(mood);
	this->name = new string(name);

}

tamagochi::~tamagochi() {
	delete id;
	delete mood;
	delete name;
	id = 0;
	mood = 0;
	name = 0;
}









int main() {
	setlocale(0, "rus");
	int answ;
	cout << "Здравствуйте! Вас приветствует игра тамагочи" << endl;
	cout << "У вас есть функции:\n1-Узнать информацию о питомце \n2-Покормить питомца \n3-Вылечить питомца\n4-поиграть с питомцем\n5-Выйти из игры" << endl;
	tamagochi Rus(0,"normall","rus");
	cin >> answ;
	switch (answ) {
	case 1:


	}
}