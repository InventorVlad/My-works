#include <iostream>
#include <fstream>
using namespace std;

/*int main() {
	ofstream file_in("C:\\Users\\РожковскийВ\\source\\repos\\Urok15.03\\Urok15.03\\Документы\\111.txt");
	file_in << "Hello world" << endl;
	file_in.close();

	char buf[50];
	ifstream file_out("111.txt");
	file_out.getline(buf, 50, ';');
	cout << buf << endl;

}*/

class quest {
	int id;
	string name;
	int stage;
public:
	quest(int x_id,string x_name,int x_stage=0);
	void set_stage(int x_stage);
	int get_id();
	int get_stage();
};

int quest::get_id() {
	return id;
}

int quest::get_stage() {
	return stage;
}

void quest::set_stage(int x_stage) {
	stage += 20;
}

quest::quest(int x_id, string x_name, int x_stage) {
	id = x_id;
	name = x_name;
	stage = x_stage;
}


int main() {
	quest aaa(0,"Очень крутое название",0);
	aaa.set_stage(aaa.get_stage());
	cout << aaa.get_stage() << endl;
	cout << aaa.get_id() << endl;
	ofstream file_in("C:\\Users\\РожковскийВ\\source\\repos\\Urok15.03\\Urok15.03\\Документы\\123.txt");
	file_in << aaa.get_id()<<" "<<aaa.get_stage()<< endl;
	file_in.close();


}