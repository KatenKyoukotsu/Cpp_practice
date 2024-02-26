#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "ababababa";
    int count = 0;
    size_t pos = str.find("aba");
    while (pos != string::npos) {
        cout << "Вхождение 'aba' #" << count + 1 << " на позиции " << pos << endl;
        count++;
        pos = str.find("aba", pos + 1);
    }
    cout << "Количество вхождений 'aba': " << count << endl;
    return 0;
}
