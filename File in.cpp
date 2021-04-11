#include <iostream>
#include <fstream>
using namespace std;

class pers {
private:
	int lvl;
	string klass;
	string skills;
	string path;

public:
	pers(int x_lvl, string x_klass, string x_skills);
	int get_lvl();
	string get_klass();
	string get_skills();
	void in_file();
	void set_path(string path1);
	string get_path();
	
};

pers::pers(int x_lvl, string x_klass, string x_skills) {
	lvl = x_lvl;
	klass = x_klass;
	skills = x_skills;
}

int pers::get_lvl() {
	return lvl;
}

string pers::get_klass() {
	return klass;
}

string pers::get_skills() {
	return skills;
}

void pers::set_path(string path1) {
	path = path1;
}

void pers::in_file() {
	ofstream Zapis(path);
	Zapis << get_lvl() << " " << get_klass() << " " <<get_skills() << endl;
	Zapis.close();
	cout << "Вы успешно сохранили данные" << endl;

}
string pers::get_path() {
	return path;
}




void load_files(string path1) {
	char buff[50];
	ifstream Read(path1);
	Read.getline(buff, 50);
	Read.close();
	cout << "Вот ваши данные:" << buff << endl;
}



int main() {
	setlocale(0, "rus");
	int choice;
	string path1;

	cout << "Велком ту зе клаб бади\n\n" << endl;
		cout << "Вы можете\n1-Создать нового персонажа\n2-Загрузить персонажа" << endl;
	cin >> choice;

	 if (choice == 1) {
		cout << "Введите класс персонажа\nИмеется 1-Маг\n2-Варвар" << endl;
		int choice1;
		cin >> choice1;
		if (choice1 == 1) {
			pers Mag(1, "mag", "reading");
			path1 = "mag.txt";
			Mag.set_path(path1);
			Mag.in_file();
		}
		else {
			pers Varvar(1, "varvar", "destroy");
			path1 = "varvar.txt";
			Varvar.set_path(path1);
			Varvar.in_file();
		}

		
	}
	else {
		 cout << "Введите своего персонажа" << endl;
		 string name;
		 cin >> name;
		 if (name == "mag") {
			 path1 = "mag.txt";
			 load_files(path1);
		 }
		 else if(name=="varvar"){
			 path1 = "varvar.txt";
			 load_files(path1);
		 }

	}
}


