#include <iostream>
using namespace std;

int main() {
    int finger_number;
    cout << "Введите порядковый номер пальца руки: ";
    cin >> finger_number;

    switch (finger_number) {
        case 1:
            cout << "Большой палец" << endl;
            break;
        case 2:
            cout << "Указательный палец" << endl;
            break;
        case 3:
            cout << "Средний палец" << endl;
            break;
        case 4:
            cout << "Безымянный палец" << endl;
            break;
        case 5:
            cout << "Мизинец" << endl;
            break;
        default:
            cout << "Некорректный номер пальца" << endl;
    }

    return 0;
}
