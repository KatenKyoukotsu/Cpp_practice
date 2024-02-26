#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "xabcyabcz";
    size_t pos = str.find("xabc");
    while (pos != string::npos) {
        str.erase(pos, 1);
        pos = str.find("xabc", pos);
    }
    cout << str << endl;
    return 0;
}
