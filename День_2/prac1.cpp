#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    float meters;
    cout << "Введите метры: " << endl;
    cin >> meters;

    cout << "Километры: " << meters / 1000 << " км" << endl;

    return 0;
}