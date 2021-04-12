#include<iostream>
using namespace std;

class pet {
private:
	int* id, * age, * health, * mood, * satiety;
	bool *is_ill;
	string name;

public:
	void set_name();
	int get_health();
	int get_mood();
	int get_ill();
	pet(int x_id);
	~pet();
};

pet::pet(int x_id) {
	age = new int(1);
	health = new int(100);
	mood = new int(100);
	satiety = new int(100);
	is_ill = new bool(false);
	id = new int;
	*id = x_id;
}

pet::~pet() {
	delete age, health, mood, satiety, id,is_ill;
	age = 0, health = 0, mood = 0, satiety = 0, id = 0;
}

int main() {
	pet aaa(1);
}