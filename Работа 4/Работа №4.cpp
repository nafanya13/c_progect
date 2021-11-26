#include <iostream>
using namespace std;
int main()
{ 
setlocale(0, "");
cout << "[+] Месяц года:" << endl;
cout << "1 - [Январь]" << endl;
cout << "2 - [Февраль]" << endl;
cout << "3 - [Март]" << endl;
cout << "4 - [Апрель]" << endl;
cout << "5 - [Май]" << endl;
cout << "6 - [Июнь]" << endl;
cout << "7 - [Июль]" << endl;
cout << "8 - [Август]" << endl;
cout << "9 - [Сентбрь]" << endl;
cout << "10 - [Октябрь]" << endl;
cout << "11 - [Ноябрь]" << endl;
cout << "12 - [Декабрь]" << endl;
cout << "Введите желаемый месяц:";
int month;
cin >> month;
switch (month) {
case 1:
	cout << "Вы выбрали Январь";
	break;
case 2:
	cout << "Вы выбрали Февраль";
	break;
case 3:
	cout << "Вы выбрали Март";
	break;
case 4:
	cout << "Вы выбрали Апрель";
	break;
case 5:
	cout << "Вы выбрали Май";
	break;
case 6:
	cout << "Вы выбрали Июнь";
	break;
case 7:
	cout << "Вы выбрали Июль";
	break;
case 8:
	cout << "Вы выбрали Август";
	break;
case 9:
	cout << "Вы выбрали Сентябрь";
	break;
case 10:
	cout << "Вы выбрали Октябрь";
	break;
case 11:
	cout << "Вы выбрали Ноябрь";
	break;
case 12:
	cout << "Вы выбрали Декабрь";
	break;
default:
	cout << "Необходимо вести число от 1 до 12";
}

return 0;
}