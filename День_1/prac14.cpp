#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string str = "YourString123";
    int digitCount = 0;
    for (char c : str) {
        if (isdigit(c)) {
            digitCount++;
        }
    }
    cout << "Количество цифр в строке: " << digitCount << endl;
    return 0;
}
