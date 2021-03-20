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
    for (int i = 0; i < item_counter; i++) {
        cout << i+1 << " " << items[i] << endl;
    }
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

void inventory::remove(string some_item) { //функция удаляет предмет из инвентаря; если названного предмета в инвентаре нет, \ то функция ничего не делает
    int search;
    for (int i = 0; i < item_counter - 1; i++) {
        if (items[i] == some_item) {
            search = i;
            break;
        }
    }
    if (search != item_counter-1) {
        for (int i = search; i < item_counter - 1; i++) {
            items[i] = items[i + 1];
        }
    }
    else {}
    item_counter--; // количество предметов увеличивается на единицу
    //string* temp = new string[item_counter]; // создается новый массив

    
    

}


int main() {
    setlocale(0, "rus");
    inventory my_inventory;
    my_inventory.open();
    my_inventory.add("oskolok");
    my_inventory.open();
    my_inventory.add("Дриклабрус");
    my_inventory.open();
    my_inventory.remove("oskolok");
    my_inventory.open();
}