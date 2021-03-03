
#include <iostream>
#include<windows.h>
#include <string>
using namespace std;

class NPC {
public:
	NPC(string x, int y);
	void dialogue();
	void get_name();
private:
	string name;
	int id;
	int intellect;

	void attack();
	void repair();
};

NPC::NPC(string x, int y) {
	name = x;
	id = y;
}

void NPC::dialogue() {
	int switch_answ;
	string myName;

		int force = 3;
		int answer = true;
		int answer2 = true;

		cout << "Enter your name: " << endl;
		cin >> myName;

		cout << "Загрузка Мира,пожалуйста подождите" << endl;
		//Sleep(3000);
		if (id == 1) {

		cout << "Привет странник, меня зовут Олдрик.Я местный кузнец этой деревни,могу как-то помочь тебе?\n" << endl;
		cout << "1.здравствуй меня зовут " << myName << " можешь рассказать об этом городе?" << endl;
		cout << "2.Здравствуй,у меня появилась небольшая проблема с моим мечом,поможешь?" << endl;
		cout << "3.Здравствуй,спасибо нет,просто гуляю и осматриваю территорию" << endl;
		cout << "4. Здравствуй Олдрик,прости меня.Я был под сильной илюзией и нечаянно истребил твою семью" << endl;

		cin >> switch_answ;
		switch (switch_answ)
		{

		case 1:
			cout << "конечно,в этом городе очень много чего происходит.Ночью тут  было слишком опасно из-за разбойников,так что не советую гулять в темное время суток.\n Но из-за того что недавно на нашу деревню напал  дракон,сейчас все помогают друг другу...." << endl;
			break;

		case 2:
			cout << "ты правильно сделал что обратился именно ко мне.Дай ка я посмотрю что с ним." << endl;
			Sleep(200);
			cout << "Мгм, чтож я понял всю проблему твоего меча, хочешь починить его сейчас? " << endl;
			cout << "1.да\n 2.нет спасибо я пока еще похожу,если что вернусь" << endl;
			cin >> answer;

			if (answer == 1) {
				cout << "Отлично!с тебя 370 золотых " << endl;

				cout << "1.споуойно заплатить\n2.пригрозить и не заплатить ему" << endl;
				cin >> answer;
				if (answer == 1) {
					cout << "благодарю,скоро верну вам меч" << endl;
				}
				if (answer == 2) {
					cout << "СТРАЖА,помогите мне!" << endl;
				}

			}

			if (answer == 2) {

				cout << "хорошо буду вас ждать" << myName << " до свидания!" << endl;
			}
			break;

		case 3:
			cout << "хорошо,но если что заходи,могу продать или починить тебе оборудование" << endl;
			break;

		case 4:
			cout << "это же ведь шутка?" << endl;
			cout << "1.нет,прости\n 2.Конечно!" << endl;
			cin >> answer2;
			if (answer2 == 1) {
				cout << "За что? Почему именно моя семья? Я тебе это не прощу!" << endl;
				if (force < 4) {
					cout << "УМРИ!" << endl;
				}
				else {
					cout << "Я ВИЖУ ЧТО ТЫ НЕ СЛАБАК,НО И Я НЕ ПРОМАХ.ЗАЩИЩАЙСЯ!!" << endl;
				}
			}
			else
				cout << "НЕ УХОДИ ОТ ТЕМЫ" << endl;
			break;
		default:
			cout << "извините я не понимаю этот язык" << endl;
			break;
		}
	}
	else if (id == 2) {
			intellect = 3;
			cout << "Здравствуй! Я старейшина племени Унунгнумбум. В этом племени мы распространяем цитатки великих людей" << endl;
			cout << "Например:Я не конфетка,которая всем по вкусу,а орешек,который всем не по зубам.Ну ты понял" << endl;
			cout << "А теперь надо проверить,достоин ли ты таких высоких познаний" << endl;
			cout << "Сколько будет 2+2 ?" << endl;
			if (intellect < 6) {
				cout << "Ваш ответ- 5" << endl;
				cout << "Да.Вы гений! ВЫ получаете доступ к цитаткам всего мира.Вы молодец" << endl;
			}
			else {
				cout << "Ваш ответ-4" << endl;
				cout << "Пишов отсюда.Ты недостоин нашего внимания" << endl;
			}

	}
}

int main() {
	setlocale(0, "ru");
	NPC Oldrick("Oldrick", 1);
	Oldrick.dialogue();
	NPC Stareishina("Stareishina", 2);
	Stareishina.dialogue();
}