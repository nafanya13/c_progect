#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Выбери значение времени года:\n";
    cout << "1 - Лето\n";
    cout << "2 - Осень\n";
    cout << "3 - Зима\n";
    cout << "4 - Весна\n";

    int enter;

    cin >> enter;

    if (enter == 1) {
        cout << "Сегодня лето можно спааать !\n";
    }
    else if (enter == 2) {
        cout << "Сегодня Осень,возьми зонт\n";
    }
    else if (enter == 3) {
        cout << "Сегодня Зима\n";
    }
    else if (enter == 4) {
        cout << "Сегодня Весна\n";
    }
    else {
        cout << "Такого значения не существует\n";
    }
    int _; cin >> _;
    return 0;
}