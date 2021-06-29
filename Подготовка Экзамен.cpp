#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class Contact {
	int user_id;
	string phone;
	string email;
	string address;
public:
	Contact(int user_id, string phone, string email, string address) :
		user_id(user_id), phone(phone), email(email), address(address) 
	{}
	
	
};



class User {
private:
	int id;
	string login;
	string password;
	//Contact contacts();
public:
	User(int id, string login, string password) :
		id(id), login(login), password(password)
	{}
	virtual void print()=0;
	int get_id() { return id; }
	string get_login() { return login; }

};



class Admin :public User {
	string department; 
	int access_level;
	string type;
public:
	Admin(int id, string login, string password, string department, int access_level, string type)
		:User(id, login, password),
		department(department), access_level(access_level), type(type)
	{}
	virtual void print();
	

};

void Admin::print() {
	cout << "id-" << get_id() << "\n" << "login-" << get_login() << "\n" << endl;
}




int main() {
	Admin Vlad(6,"fdsf","fdsf","fdsfs",1,"fdsf");
	Vlad.print();
}