#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "This is the word and the word";
    size_t pos = str.find("word");
    while (pos != string::npos) {
        str.replace(pos, 4, "letter");
        pos = str.find("word", pos + 1);
    }
    cout << str << endl;
    return 0;
}
