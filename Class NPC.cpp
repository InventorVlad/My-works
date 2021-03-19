#include <iostream>
using namespace std;

// класс описывает простой инвентарь игрового персонажа
class inventory {
public:
    inventory();
    ~inventory();
    void add(string some_item);
    void remove(string some_item);
    void open();
private:
    int item_counter; // количество предметов в инвентаре
    string* items; // список предметов в инвентаре
};

inventory::inventory() { // конструктор; изначально у нашего протагониста всего три вещи
    item_counter = 3;
    items = new string[item_counter];
    items[0] = "простая одежда";
    items[1] = "железный кинжал";
    items[2] = "буханка хлеба";
}

inventory::~inventory() { // деструктор; не забываем освободить память!
    delete[] items;
    items = 0;
}

void inventory::open() { // функция демонстрирует содержимое инвентаря
    for (int i = 0; i < item_counter; i++) cout << items[i] << endl;
    cout << endl;
}

void inventory::add(string some_item) { // функция позволяет добавить предмет в инвентарь
    item_counter++; // количество предметов увеличивается на единицу
    string* temp = new string[item_counter]; // создается новый массив
    for (int i = 0; i < item_counter - 1; i++) temp[i] = items[i]; // в новый массив копируются все данные из старого
    temp[item_counter - 1] = some_item; // последним записываем добавленный предмет
    delete[] items; // удаляем старый массив и освобождаем память
    items = temp; // присваеваем переменной items адрес нового массива
    temp = 0; // удаляем временный указатель
};

void inventory::remove(string some_item) {}; //функция удаляет предмет из инвентаря; если названного предмета в инвентаре нет, \
                                                то функция ничего не делает


class NPC {
public:
	virtual void dialogue() { cout << "Hello from A" << endl; }
private:
};

class bandit :NPC {
public:
	void dialogue();
};

void bandit::dialogue() {
	int choice;
	cout << "Слышь,путник,гони Money\n" << endl;
	cout << "У вас есть 3 варианта" << endl;
	cout << "1-Попытаться убежать \n 2-Дать отпор ущербу \n 3-Послать его" << endl;
	cin >> choice;
	if (choice == 1) {
		cout << "Бандит вас догнал и вставил вам в задницу бутылку" << endl;
	}
	else if (choice == 2) {
		cout << "Началась дикая заруба. Вы дали в челюсть этому засранцу,но оказалось,что его челюсть стальная" << endl;
		cout << "Он поднял вас за шкирку над землей и со словами:Этому миру нужно очищение,вставил бутылку вам в зад" << endl;
	}
	else {
		cout << "Как только вы его послали,он произнес что то на латыни и.....\n С неба упала бутылка,которая сделала из вас месиво мяса. Леха лепеха так сказатб)))" << endl;
	}
	

}
int main() {
    setlocale(0, "rus");
    inventory my_inventory;
    my_inventory.open();
    my_inventory.add("Осколки Дриклабруса");
    my_inventory.open();
    my_inventory.remove("Осколки Дриклабруса");
    my_inventory.add("Дриклабрус");
    my_inventory.open();
    bandit ban;
	ban.dialogue();
}