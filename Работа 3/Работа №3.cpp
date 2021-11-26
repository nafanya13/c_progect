#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << ":) Выберите нужную операцию " << endl;
	cout << "1) +" << endl;
	cout << "2) -" << endl;
	cout << "3) *" << endl;
	cout << "4) /" << endl;
	cout << "5) %" << endl;
	int action;
	float num, num2;

	cin >> action;
	cout << "Введите переменную a : ";
	cin >> num;
	cout << "Введите переменную b : ";
	cin >> num2;

	if (action == 1) {
		cout << num << "+" << num2 << "=" << num + num2 << endl;
	}
	else if (action == 2) {
		cout << num << "-" << num2 << "=" << num - num2 << endl;
	}
	else if (action == 3) {
		cout << num << "*" << num2 << "=" << num * num2 << endl;
	}
	else if (action == 4) {
		if (num2 == 0) {
			cout << "На ноль делить нельзя";
		}
		else {
			cout << num << "/" << num2 << "=" << num / num2 << endl;
		}
	}
	else if (action == 5) {
		int r = num;
		int t = num2;
		cout << num << "%" << num2 << "=" << r % t << endl;
	}
	else {
		cout << "Нужно вести число от 1 до 5";
	}

	return 0;
	
}