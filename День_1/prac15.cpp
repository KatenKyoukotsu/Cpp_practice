#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "abacab";
    bool onlyABC = all_of(str.begin(), str.end(), [](char c) {
        return c == 'a' || c == 'b' || c == 'c';
    });
    if (onlyABC) {
        cout << "Строка содержит только символы 'a', 'b', 'c'" << endl;
    } else {
        cout << "Строка содержит другие символы помимо 'a', 'b', 'c'" << endl;
    }
    return 0;
}
