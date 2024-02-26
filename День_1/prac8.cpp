#include <iostream>
#include <string>

int main() {
    std::string str = "xycezeccxyccbxzxzzyc";
    char firstChar = '\0';
    bool xFound = false;
    bool wFound = false; 

    for (int i = 0; i < str.size(); i++) 
    {
        if (str[i] == 'x') {
            firstChar = 'x';
            xFound = true;
            break;
        } else if (str[i] == 'w') {
            firstChar = 'w';
            wFound = true;
            break;
        }
    }

    if (!xFound && !wFound) {
        std::cout << "Символы 'x' и 'w' отсутствуют в строке" << std::endl;
    } else if (!xFound) {
        std::cout << "Символ 'x' отсутствует в строке" << std::endl;
    } else if (!wFound) {
        std::cout << "Символ 'w' отсутствует в строке" << std::endl;
    }    
    if (xFound || wFound) {
        std::cout << "Символ " << firstChar << " встречается раньше" << std::endl;
    }

    return 0;
}
