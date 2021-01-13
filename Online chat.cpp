#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
const int MAX_USERS = 10;

void add_user(int& some_counter,string& name1, string& name2, string& name3, string& name4, string& name5, string& name6, string& name7, string& name8, string& name9, string& name10) {
	if (some_counter != MAX_USERS) { //Здесь можно было бы обойтись без if,а написать просто Default в свитче,Но мне просто нравится const,не удалять же его.
		some_counter++;
		cout << "Введите ваше имя пользователя:" << endl;
		switch (some_counter)
		{
		case 1:
		cin >> name1;
		cout << "Пользователь " << name1 << " успешно добавлен" << endl;
		break;
	    case 2:
		cin >> name2;
		cout << "Пользователь " << name2 << " успешно добавлен" << endl;
		break;
		case 3:
			cin >> name3;
			cout << "Пользователь " << name3 << " успешно добавлен" << endl;
			break;
		case 4:
			cin >> name4;
			cout << "Пользователь " << name4 << " успешно добавлен" << endl;            //Здесь идет добавление имя пользователя
			break;
		case 5:
			cin >> name5;
			cout << "Пользователь " << name5 << " успешно добавлен" << endl;
			break;
		case 6:
			cin >> name6;
			cout << "Пользователь " << name6 << " успешно добавлен" << endl;
			break;
		case 7:
			cin >> name7;
			cout << "Пользователь " << name7 << " успешно добавлен" << endl;
			break;
		case 8:
			cin >> name8;
			cout << "Пользователь " << name8 << " успешно добавлен" << endl;
			break;
		case 9:
			cin >> name9;
			cout << "Пользователь " << name9 << " успешно добавлен" << endl;
			break;
		case 10:
			cin >> name10;
			cout << "Пользователь " << name10 << " успешно добавлен" << endl;
			break;
	
		}
		cout << "\n" << endl;
	}
	else {
		cout << "Добавление пользователя невозможно" << endl;
		cout << "\n" << endl;
	}
    }

void delete_user(int& some_counter, string& name0, string& name1, string& name2, string& name3, string& name4, string& name5, string& name6, string& name7, string& name8, string& name9) {
	if (some_counter != 0) {
		some_counter--;
		switch (some_counter)
		{
		case 0:
			cout << "Пользователь " << name0 << " успешно удален" << endl;
			name0 ="";
			break;
		case 1:
			cout << "Пользователь " << name1 << " успешно удален" << endl;
			name1 = "";
			break;
		case 2:
			cout << "Пользователь " << name2 << " успешно удален" << endl;
			name2 = "";
			break;
		case 3:
			cout << "Пользователь " << name3 << " успешно удален" << endl;
			name3 = "";
			break;
		case 4:
			cout << "Пользователь " << name4 << " успешно удален" << endl;                     //Здесь идет очистка имени пользователя
			name4 = "";
			break;
		case 5:
			cout << "Пользователь " << name5 << " успешно удален" << endl;
			name5 = "";
			break;
		case 6:
			cout << "Пользователь " << name6 << " успешно удален" << endl;
			name6 = "";
			break;
		case 7:
			cout << "Пользователь " << name7 << " успешно удален" << endl;
			name7 = "";
			break;
		case 8:
			cout << "Пользователь " << name8<< " успешно удален" << endl;
			name8 = "";
			break;
		case 9:
			cout << "Пользователь " << name9 << " успешно удален" << endl;
			name9 = "";
			break;

		}
		cout << "\n" << endl;
	}
	else {
		cout << "Удаление пользователя невозможно,их тут и нет вообще,как бы" << endl;
		cout << "\n" << endl;
	}
    }

int main() {
	setlocale(0, "rus");
	int user_counter = 0; //текущее количество пользователей в чате
	string name1,name2,name3,name4,name5,name6,name7,name8,name9,name10;
	bool again = true;
	while (again) {
		int switch_answ;
		cout << "Please, choose the option: " << endl;
		cout << "1. Add user" << endl;
		cout << "2. Delete user" << endl;
		cout << "3. Exit" << endl;
		cout << "4. Users" << endl;
		cin >> switch_answ;
		switch (switch_answ) {
		case 1:
			add_user(user_counter, name1, name2, name3, name4, name5, name6, name7, name8, name9, name10);
			break;
		case 2:
			delete_user(user_counter, name1, name2, name3, name4, name5, name6, name7, name8, name9, name10);
			break;
		case 3:
			again = false;
			break;
		case 4:
			cout << name1 << "\n" << name2 << "\n" << name3 << "\n" << name4 << "\n" << name5 << "\n" << name6 << "\n" << name7 << "\n" << name8 << "\n" << name9 << "\n" << name10 << endl;
		default:
			break;
		}
		if (user_counter == 10) {
			cout << "В этом чатике фул пати из 10 человек.Вот их имена" << endl;
			cout << name1 <<"\n"<< name2 <<"\n"<< name3 <<"\n"<< name4 <<"\n"<< name5 <<"\n"<< name6 <<"\n"<< name7 <<"\n"<< name8 <<"\n"<< name9 <<"\n"<< name10 << endl;
		}
	}
}

//То,что ниже это обычная выполненная домашка,а что еще ниже,это мои эксперименты с функциями без ссылок. Там ничего важного нет,просто если я что то забуду,будет как напоминалка почему так нельзя.

/*#include <iostream>
using std::cout;
using std::cin;
using std::endl;
const int MAX_USERS = 10; //максимально допустимое количество пользователей в чате

void add_user(int& some_counter) {
	if (some_counter != MAX_USERS) {
		some_counter++;
		cout << "Пользователь успешно добавлен" << endl;
	}
	else {
		cout << "Добавление пользователя невозможно" << endl;
	}
}

void delete_user(int& some_counter) {
	if (some_counter != 0) {
		some_counter--;
		cout << "Пользователь успешно удален" << endl;
	}
	else {
		cout << "Удаление пользователя невозможно,их тут и нет вообще,как бы" << endl;
	}
}

int main() {
	setlocale(0, "rus");
	int user_counter = 0; //текущее количество пользователей в чате
	bool again = true;
	while (again) {
		int switch_answ;
		cout << "Please, choose the option: " << endl;
		cout << "1. Add user" << endl;
		cout << "2. Delete user" << endl;
		cout << "3. Exit" << endl;
		cin >> switch_answ;
		switch (switch_answ) {
		case 1:
			add_user(user_counter);
			break;
		case 2:
			delete_user(user_counter);
			break;
		case 3:
			again = false;
			break;
		default:
			break;
		}
		cout << user_counter << endl;
	}
}

*/









/*#include <iostream>
using std::cout;
using std::cin;
using std::endl;
const int MAX_USERS = 10; //максимально допустимое количество пользователей в чате
int user_counter=0;

int add_user() {
	if (user_counter != MAX_USERS) {
		user_counter++;
		cout << "Пользователь успешно добавлен" << endl;
	}
	else {
		cout << "Добавление пользователя невозможно" << endl;
	}
	return user_counter;
}

void delete_user(int& some_counter) {
	if (some_counter != 0) {
		some_counter--;
		cout << "Пользователь успешно удален" << endl;
	}
	else {
		cout << "Удаление пользователя невозможно,их тут и нет вообще,как бы" << endl;
	}
}

int main() {
	setlocale(0, "rus");
	bool again = true;
	while (again) {
		int switch_answ;
		cout << "Please, choose the option: " << endl;
		cout << "1. Add user" << endl;
		cout << "2. Delete user" << endl;
		cout << "3. Exit" << endl;
		cin >> switch_answ;
		switch (switch_answ) {
		case 1:
			add_user();
			break;
		case 2:
			delete_user(user_counter);
			break;
		case 3:
			again = false;
			break;
		default:
			break;
		}
		cout << user_counter << endl;
	}
}
*/