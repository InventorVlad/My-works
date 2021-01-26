#include <iostream>
#include <ctime>
using namespace std;

int player_health = 100;
int npc_health = 100;

void npc_damage() {
	srand(time(NULL));
	int npc_damage;
	npc_damage =rand() % 20+1;
	player_health = player_health - npc_damage;
	if (player_health < 0) {
		player_health = 0;
	}
}

void my_damage(int& distance) {
	const int my_damage = 4;
	int critical_hit;
	if(distance>1){
	srand(time(NULL));
	critical_hit = rand() % 10 + 1;
	if (critical_hit == 10) {
		cout << "Вы сделали идеальный выстрел и нанесли критический урон варвару" << endl;
		npc_health = npc_health - my_damage - 7;
	}
	else {
		npc_health = npc_health - my_damage;
	}
	if (npc_health < 0) {
		npc_health = 0;
	}
	}
	else {
		cout << "Вы не можете выстрелить,так как варвар вплотную возле вас.Вы отходите и наносите минимальный урон в 3 hp" << endl;
		distance = 1;
		npc_health = npc_health-3;
		if (npc_health < 0) 
			npc_health = 0;
	}
}

void distance1(int& distance) {
	if (distance > 1) {
		distance = distance - 1;
		cout << "Варвар еще на подходе и не наносит вам урон" << endl;
	}
	else {
		npc_damage();
	}
}

int main() {
	setlocale(0, "Rus");
	int distance = 15;
	cout << "Здравствуйте! Вы попали на арену. Вы являетесь лучником,а ваш соперник варваром.\n Между вами есть дистанция. Вы можете одолеть варвара только на расстоянии,ведь если он подойдет к вам вплотную,он вас размажет как блоху! \n Удачи! " << endl;
	cout << "Для начала игры нажмите Enter" << endl;
	while (player_health > 0 &&  npc_health > 0) {
		cin.get();
		my_damage(distance);
		distance1(distance);
		cout << "Ваше здоровье равно = " << player_health << endl;
		cout << "Здоровье вашего врага равно = " << npc_health << endl; 
	}
	if (player_health > 0)
		cout << "Вы одержали победу,уничтожив варвара!" << endl;
	else
		cout << "Ни смотря ни на что варвар сокрушил вас как блоху,попробуйте сыграть еще раз!" << endl;
}	
