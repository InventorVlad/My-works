﻿#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(0, "Ru");
	int force = 9, dexterity = 0, intellect = 8, charisma = 10, luck = 7;
	cout << "Вы обнаружили новую локацию и прямо перед вами оказался барыга. Вы решили с ним пообщаться. А вдруг повезет..." << endl;
	cout << ""<< endl;
	Sleep(3000);
	cout << "Первое впечатление оказалось таким:" << endl;
	Sleep(2000);
	cout << "Тип выглядит очень странным и требовательным. Наверное у него продается что то необычное. Вам очень любопытно узнать побольше" << endl;
	Sleep(5000);
	cout << "" << endl;
	cout << "Вы решились подойти к торговцу и оказалось правдой то,что барыга дейсвительно очень странный и загадочный" << endl;
	if (force < 8 || dexterity < 8){
		cout << "И Вы даже не успели еще поздороваться,как вам выдали такое" << endl;
		Sleep(3000);
		cout << ("-Вижу ты слишком слаб и не выглядишь богато,нам не о чем с тобой говорить") << endl;
		Sleep(6000);
		if (intellect > 6) {
			cout << "-Эмм. И вам здравствуйте.Внешность обманчива,а сила сейчас решает не все" << endl;
			Sleep(3000);
			cout << "-Я недавно изучил очень сложный посох и мне не хватает 1 детали для завершения" << endl;
			Sleep(3000);
			cout << "-Извини,что так грубо к тебе отнесся в начале,времена сейчас сложные.Какая именно деталь тебе нужна?" << endl;
			Sleep(3000);
			cout << "-Мне нужен брыклаврус,у вас такое есть?" << endl;
			Sleep(3000);
			cout << "-Ооо. Это очень редкая вещь,она для меня бесценна и поэтому я не могу вам ее продать." << endl;
			Sleep(3000);
			cout << "" << endl;
			cout << "Вы про себя подумали: мне очень нужна эта вещь,любой ценой. И поэтому вы решаете использовать свою удачу"<< endl;
			Sleep(3000);
			if (luck >= 7) {
				cout << "" << endl;
                cout << "Вы разговаривали достаточно долго, и торговцу надо было сходить по делам(проверить плантации конопли). Но вот неудача,он споткнулся и упал на вилы." << endl;
				Sleep(3000);
				cout << "Вы заметили,что нужная вам вещь выпала у него из кармана" << endl;
				Sleep(3000);
				cout << "Время на прокачку удачи было потрачено не зря" << endl;
			}
			else {
				cout << "Ваша удача вам не помогла, у вас уже очень мало шансов,но уговорить харизмой можно попробовать" << endl;
				Sleep(3000);
				if (charisma == 10)
					cout << "Вы использовали все свои способности по максимуму и подсыпали этому негодяю снотворного во время того,как он отвлекся и быстренько утащили все что вам нужно:)" << endl;
				else
					cout << "Ничего не вышло,все старания впустую. Ваше сердце разбито.Надо бухнуть" << endl;
			}
		} 
		else {
			if (charisma > 7 || luck > 7) {
				cout << "-Пожалуйста,давайте пообщаемся, у меня большой потенциал.В будущем я тебе отплачу той же монетой,если поможешь с крутым стафом" << endl;
				Sleep(3000);
				cout << "Начался долгий разговор" << endl;
				Sleep(8000);
				cout << "-Ну,хорошо друг,помогу тебе с хорошим стафом" << endl;
				Sleep(3000);
				cout << "Спасибо большое,ты человек с большой душой" << endl;
				Sleep(3000);
			}
			else {
				cout << "-Пожалуйста,друг,давай пообщаемся? Я могу с чем нибудь тебе помочь,ради того чтобы мы смогли с тобой работать" << endl;
				Sleep(3000);
				cout << "-Ты можешь выполнить 1 мое задание-зачисти пещеру от гоблинов" << endl;
				Sleep(3000);
				cout << "-Хорошо,большое спасибо,как выполню,обязательно вернусь" << endl;
			}
		}
		}else{
		cout << "-Здравствуй путник! Вижу ты очень силен. Чего желаешь?" << endl;
		Sleep(5000);
		cout << " -Я желаю самый мощный меч - индрибундрум,есть ли у вас такое?" << endl;
		Sleep(5000);
		cout << "-Да,такой меч у меня есть.Этот меч обладает самыми лучшими характеристиками.И он доступен для покупки только тем,у кого все способности на максимуме" << endl;
		Sleep(5000);
		if (force >= 10, dexterity >= 10, intellect >= 10, charisma > 10, luck >= 10) {
			cout << "-Я мечтал об этом мече столько времени! Я готов пойти за него на все. Чего ты хочешь?" << endl;
			Sleep(5000);
			cout << "Ты должен выполнить самое сложное задание-Уничтожить десятиглавого дракона." << endl;
			Sleep(5000);
			cout << "-Этого не сделал еще никто,но я-смогу" << endl;
			Sleep(3000);
			cout << "Вы идете подготавливаться к самой серьезной битве вашей жизни" << endl;
		}
		else {
			cout << "-Я буду стараться,чтобы добиться таких успехов и пройдут годы,прежде чем я добьюсь таких успехов,но я смогу!!!" << endl;
			Sleep(3000);
			cout << "Буду ждать тебя путник,увидимся позже" << endl;
		}

	}
	}
