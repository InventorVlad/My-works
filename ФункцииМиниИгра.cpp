#include <iostream>
using namespace std;

int gun=4, shoot=5, shield = 7,hp=100,force, dexterity,intellect,endurance,charm,luck,clas,forceweap,distanceweap;

int skill() {
int skill;
skill = (gun+shoot)/2;
return skill;

}

int protection() {
	int protection;
	protection = shield * 8 / 10;
	return protection;
}

int features() {
	int features;
	features = (force + dexterity + intellect + endurance + luck)/5;
	return features;
}

int damage() {
	int damage;
	damage = skill()+ features() - protection();
	return damage;
}

int life() {
	hp = hp - damage();
	if (hp > 0) {
		cout << hp << endl;
		return hp;
	}
	else {
		hp = 0;
		cout << hp << endl;
		return hp;
	}
}


int main() {
	setlocale(0, "Rus");
	cout << "Выберите 1 из 3х классов.На выбор есть: \n 1-Варвар \n 2-Лучник \n 3-Маг" << endl;
	cin >> clas;
	if (clas == 1) {
		force = 10;
		dexterity = 6;
		intellect = 3;
		endurance = 7;
		charm = 3;
		luck = 4;
	}
		else if (clas == 2)
		{
			force = 8;
			dexterity = 10;
			intellect = 7;
			endurance = 7;
			charm = 5;
			luck = 6;
		}
		else if (clas == 3)
		{
			force = 8;
			dexterity = 8;
			intellect = 9;
			endurance = 6;
			charm = 7;
			luck = 8;
        }
		else {
		cout << "Вы промахнулись,попробуйте заново" << endl;
	}
	int weapon;
	cout << "Выберите базовое оружие \n 1-Рапира.Ее мощность 6,дальность действия 1. \n 2-Катана.Ее мощность 5,дальность действия 2. \n 3-Арбалет. Его мощность 4,дальность действия 6." << endl;
	cin >> weapon;
	if (weapon == 1) {
		forceweap = 6;
		distanceweap = 1;
	}
	else if (weapon == 2) {
		forceweap = 5;
		distanceweap = 2;
	}
	else {
		forceweap = 4;
		distanceweap = 6;
	}
}
	
#include <iostream>
using namespace std;

int hp = 100;

int skill() {
int skill,gun=4,shoot=5;
skill = (gun+shoot)/2;
return skill;

}

int protection() {
	int protection,shield=7;
	protection = shield * 8 / 10;
	return protection;
}

int features() {
	int features;
	int force, dexterity, intellect, endurance, charm, luck, clas, forceweap, distanceweap;
	features = (force + dexterity + intellect + endurance + luck)/5;
	return features;
}

int damage() {
	int damage;
	damage = skill()+ features() - protection();
	return damage;
}

int life() {
	hp = hp - damage();
	if (hp > 0) {
		cout << hp << endl;
		return hp;
	}
	else {
		hp = 0;
		cout << hp << endl;
		return hp;
	}
}


int main() {
	setlocale(0, "Rus");
	cout << "Выберите 1 из 3х классов.На выбор есть: \n 1-Варвар \n 2-Лучник \n 3-Маг" << endl;
	cin >> clas;
	if (clas == 1) {
		force = 10;
		dexterity = 6;
		intellect = 3;
		endurance = 7;
		charm = 3;
		luck = 4;
	}
		else if (clas == 2)
		{
			force = 8;
			dexterity = 10;
			intellect = 7;
			endurance = 7;
			charm = 5;
			luck = 6;
		}
		else if (clas == 3)
		{
			force = 8;
			dexterity = 8;
			intellect = 9;
			endurance = 6;
			charm = 7;
			luck = 8;
        }
		else {
		cout << "Вы промахнулись,попробуйте заново" << endl;
	}
	int weapon;
	cout << "Выберите базовое оружие \n 1-Рапира.Ее мощность 6,дальность действия 1. \n 2-Катана.Ее мощность 5,дальность действия 2. \n 3-Арбалет. Его мощность 4,дальность действия 6." << endl;
	cin >> weapon;
	if (weapon == 1) {
		forceweap = 6;
		distanceweap = 1;
	}
	else if (weapon == 2) {
		forceweap = 5;
		distanceweap = 2;
	}
	else {
		forceweap = 4;
		distanceweap = 6;
	}
}
	
