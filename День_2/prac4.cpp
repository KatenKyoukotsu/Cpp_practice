#include <iostream>
using namespace std;

int main() {
    double weight_kg, height_cm;
    cout << "Введите ваш вес в килограммах: ";
    cin >> weight_kg;
    cout << "Введите ваш рост в сантиметрах: ";
    cin >> height_cm;

    double height_m = height_cm / 100;

    double bmi = weight_kg / (height_m * height_m);
 
    cout << "Ваш индекс массы тела (ИМТ): " << bmi << endl;

    return 0;
}
