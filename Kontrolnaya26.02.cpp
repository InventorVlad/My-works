/*В этой программе создан класс weapon, описывающий поведение обыкновенного немагического оружия в игре.
Задание: создать класс magic_weapon, являющийся наследником класса weapon.*/

#include <iostream>
#include <ctime>
using namespace std;

class weapon {
public:
    weapon(int base_damage, int durability, int degradation, int cost, int weight); //все важные значения задаются в конструкторе
    int get_base_damage() const;
    int get_durability() const;
    int get_degradation() const;
    void set_cost(int new_cost);
    int get_cost() const;
    int get_weight() const;
    int hit(); //здесь высчитывается результирующая сила удара для данного оружия

private:
    int base_damage; //базовый урон
    int durability; //максимальная прочность
    int degradation; //степень износа оружия
    int cost; //цена
    int weight; //вес
    int name_weapon;
};

weapon::weapon(int base_damage = 10, int durability = 100, int degradation = 0, int cost = 250, int weight = 5) :
    //все важные величины имеют значения по умолчанию
    base_damage(base_damage),
    durability(durability),
    degradation(degradation),
    cost(cost),
    weight(weight)
    //список инициализации: значения аргументов присваиваются членам класса, позволяя оставить тело конструктора пустым
{

}

int weapon::get_base_damage() const { //функция-геттер для базового урона
    return this->base_damage;
}

int weapon::get_durability() const { //функция-геттер для прочности
    return this->durability;
}

int weapon::get_degradation() const { //функция-геттер для степени износа
    return this->degradation;
}

void weapon::set_cost(int new_cost) { //функция-сеттер для цены
    this->cost = new_cost;
}

int weapon::get_cost() const { //функция-геттер для цены
    return this->cost;
}

int weapon::get_weight() const { //функция-геттер для веса
    return this->weight;
}

//все геттеры определены, как константные методы, что позволяет обезопасить члены класса от нежелательных изменений
void death(int player_hp, int enemy_hp) {
    if (player_hp < 0 && enemy_hp < 0) cout << "All die" << endl;
    else if (player_hp > 0 && enemy_hp < 0) cout << "You win" << endl;
    else if (enemy_hp > 0 && player_hp < 0) cout << "You die" << endl;
}

int weapon::hit() {
    srand(time(0));
    int random_effect = rand() % base_damage; //генерируем случайную величину в пределах от нуля до базового урона - 1
    int damage = this->base_damage - random_effect; //меняем урон: теперь он варьируется от нуля до изначального базового
    this->degradation++; //повышаем износ на единицу с каждым нанесенным ударом
    this->cost -= this->cost / durability; //уменьшаем цену соответственно изношенности оружия
    return damage; //возвращаем урон во внешнюю программу
}

int main() {
    setlocale(0, "rus");
    weapon simple_iron_sword, players_BIG_sword(20); //создаем два объекта - два меча, себе и противнику
    weapon human_slayer(6,100,0,0,20), zhumernacht(50,100,0,1000,5);
    int enemy_health = 1000, player_health = 100; //здоровье для протагониста и для противника

    while (enemy_health > 0 && player_health > 0) { //ни один из нас не покинет поле боя, пока жив другой...
        player_health = player_health - human_slayer.hit(); //противник наносит удар, уменьшается здоровье протагониста
        cin.get(); //программа ждет нажатия любой клавиши
        enemy_health = enemy_health - zhumernacht.hit(); //игрок бьет, уменьшается здоровье врага
        cout << "Enemy's health: " << enemy_health << endl;
        cout << "My health: " << player_health << endl;
        death(player_health, enemy_health);
    }

    cout << "Simple sword condition: " << human_slayer.get_durability() - human_slayer.get_degradation() << endl;
    cout << "Player BIG sword condition: " << zhumernacht.get_durability() - zhumernacht.get_degradation() << endl;

    return 0;
}
