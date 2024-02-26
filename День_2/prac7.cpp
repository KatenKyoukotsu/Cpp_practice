#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    int x, y;

    cout << "Введите первое число:" << endl;
    cin >> x;
    cout << "Введите второе число:" << endl;
    cin >> y;

    if (y == 0) {
        return 0;
    }

    if (x % y == 0) {
        cout << x << " кратно " << y << endl;
    } else {
        cout << x << " не кратно " << y << endl;
    }

    return 0;
}
