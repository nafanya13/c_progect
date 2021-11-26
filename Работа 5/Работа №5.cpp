#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
   
    cout << "[#] Переводчик " << endl;
    cout << "[1] Русские слова " << endl;
    cout << "[2] Английские слова " << endl;
    cout << "[3] Выйти в окно " << endl;
    cout << "[#] Введите желаемый пункт меню: ";
    int transfer;
    cin >> transfer;
    switch (transfer) {
    case 1:
        cout << "[#] Переводчик русских слов" << endl;
        cout << "[1] Жираф " << endl;
        cout << "[2] Верблюд " << endl;
        cout << "[3] Слон " << endl;
        cout << "[4] Собака " << endl;
        cout << "[5] Кошка " << endl;
        cout << "[6] Попугай " << endl;
        cout << "[7] Медведь " << endl;
        cout << "[8] Крыса " << endl;
        cout << "[9] Мышь " << endl;
        cout << "[10] Крокодил " << endl;
        cout << "[11] Змея " << endl;
        cout << "[12] Тигр " << endl;
        cout << "[13] Лев " << endl;
        cout << "[14] Аист " << endl;
        cout << "[15] Воробей " << endl;
        cout << "[#] Выберите желаемое слово: " << endl;
        int word;
        cin >> word;
        switch (word) {
        case 1:
            cout << "[1] Жираф - Giraffe" << endl;
            break;
        case 2:
            cout << "[2] Верблюд - Camel" << endl;
            break;
        case 3:
            cout << "[3] Слод - Elephant" << endl;
            break;
        case 4:
            cout << "[4] Собака - Dog" << endl;
            break;
        case 5:
            cout << "[5] Кошка - Cat" << endl;
            break;
        case 6:
            cout << "[6] Попугай - Parrot" << endl;
            break;
        case 7:
            cout << "[7] Медведь - Bear" << endl;
            break;
        case 8:
            cout << "[8] Крыса - Rat" << endl;
            break;
        case 9:
            cout << "[9] Мышь - Mouse" << endl;
            break;
        case 10:
            cout << "[10] Крокодил - Crocodile" << endl;
            break;
        case 11:
            cout << "[11] Змея - Snake" << endl;
            break;
        case 12:
            cout << "[12] Тигр - Tiger" << endl;
            break;
        case 13:
            cout << "[13] Лев - Lion" << endl;
            break;
        case 14:
            cout << "[14] Аист - Stork" << endl;
            break;
        case 15:
            cout << "[15] Воробей - Sparrow" << endl;
            break;
        default:
            cout << "[+] Нужно ввести число от 1 до 15: ";
            break;
        }
    case 2:
        cout << "[#] Переводчик английских слов" << endl;
        cout << "[1] Giraffe " << endl;
        cout << "[2] Camel " << endl;
        cout << "[3] Elephant " << endl;
        cout << "[4] Dog " << endl;
        cout << "[5] Cat " << endl;
        cout << "[6] Parrot " << endl;
        cout << "[7] Bear " << endl;
        cout << "[8] Rat " << endl;
        cout << "[9] Mouse " << endl;
        cout << "[10] Crocodile " << endl;
        cout << "[11] Snake" << endl;
        cout << "[12] Tiger " << endl;
        cout << "[13] Lion " << endl;
        cout << "[14] Stork " << endl;
        cout << "[15] Sparrow " << endl;
        cout << "[#] Выберите желаемое слово: " << endl;
        int word2;
        cin >> word2;
        switch (word2) {
        case 1:
            cout << "[1] Giraffe - Жираф" << endl;
            break;
        case 2:
            cout << "[2] Camel -Верблюд" << endl;
            break;
        case 3:
            cout << "[3] Elephant - Слод" << endl;
            break;
        case 4:
            cout << "[4] Dog - Собака" << endl;
            break;
        case 5:
            cout << "[5] Cat - Кошка" << endl;
            break;
        case 6:
            cout << "[6] Parrot - Попугай" << endl;
            break;
        case 7:
            cout << "[7] Bear - Медведь" << endl;
            break;
        case 8:
            cout << "[8] Rat - Крыса" << endl;
            break;
        case 9:
            cout << "[9] Mouse - Мышь" << endl;
            break;
        case 10:
            cout << "[10] Crocodile - Крокодил" << endl;
            break;
        case 11:
            cout << "[11] Snake - Змея" << endl;
            break;
        case 12:
            cout << "[12] Tiger - Тигр" << endl;
            break;
        case 13:
            cout << "[13] Lion - Лев" << endl;
            break;
        case 14:
            cout << "[14] Stork - Аист" << endl;
            break;
        case 15:
            cout << "[15] Sparrow - Воробей" << endl;
            break;
        default:
            cout << "[#] Нужно ввести число от 1 до 15: ";
            break;
   
        }
        return 0;
    case 3:
        cout << "[#] Нужно ввести число от 1 до 3";
     default:
     cout << "[#] Нужно ввести число от 1 до 3 ";
     break;
    }
  


}
