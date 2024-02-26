#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    float r;
    const float p = 3.141592653589793238;
    cout << "Введите радиус:" << endl;
    cin >> r;

    cout << "Площадь круга с радиусом " << r << " = " << p * r * r << endl;

    return 0;
}
