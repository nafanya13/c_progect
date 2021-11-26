#include <iostream>
using namespace std;

int num1, num2;
char operation;

void multiply()
{
	cout << "Результат : " << num1 * num2 << endl;
}

void divide()
{
	cout << "Результат : " << num1 / num2 << endl;
}
void sum()
{
	cout << "Результат : " << num1 + num2 << endl;
}
void subtraction()
{
	cout << "Результат : " << num1 - num2 << endl;
}
void WholePartOfDivide()
{
	cout << "Результат : " << num1 % num2 << endl;
}
void powFunc()
{
	cout << "Результат : " << pow(num1, num2) << endl;
}

int main()
{
	setlocale(0, "");

	cout << "Программа-калькулятор\n\n";
	cout << "Пожалуйста, введите первое число: ";
	cin >> num1;
	cout << "Пожалуйста, введите второе число: ";
	cin >> num2;
	cout << "Что вы хотите сделать с этими числами?\n\nСписок возможных операций: \n\n";

	cout << "[*]\n";
	cout << "[/]\n";
	cout << "[+]\n";
	cout << "[-]\n";
	cout << "[%]\n";
	cout << "[^]\n\n";

	cout << "Выберите операцию: ";
	cin >> operation;

	switch (operation)
	{
	case '*':
		multiply();
		break;
	case '/':
		divide();
		break;
	case '+':
		sum();
		break;
	case '-':
		subtraction();
		break;
	case '%':
		WholePartOfDivide();
		break;
	case '^':
		powFunc();
		break;
	default:
		cout << "Такой операции нет...\n\n";
		system("pause");
	}
	system("pause");
}