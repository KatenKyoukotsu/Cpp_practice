#include <iostream>
#include <string>

int main() {
    std::string str = "abcexample string";
    std::string new_str;

    if (str.substr(0, 3) == "abc") {
        new_str = "www" + str.substr(3);
    } else {
        new_str = str + "zzz";
    }

    std::cout << new_str << std::endl;

    return 0;
}
