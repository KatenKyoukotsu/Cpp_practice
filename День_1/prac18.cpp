#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string str = "abc1defabc2";
    size_t pos = str.find("abc");
    while (pos != string::npos) {
        if (isdigit(str[pos + 3])) {
            str.erase(pos, 3);
        }
        pos = str.find("abc", pos + 1);
    }
    cout << str << endl;
    return 0;
}
