#include <iostream>
#include <string>
#include <unordered_map>
#include <locale>

int main() {
    std::wstring encrypted_text = L"Бтсвбр ел ибвн анжмс, Гвлъ ел бтсвбрн тсбмс Т залсбгалрыим цнвкрлим, Т снвнилим ъл тлълим; Наь влтснс пнвнъ ърбвцби, Л пбъ енй хвутслаьеый ъби; Онакл сли жмрнс вучелд, Ъл злснйемцл клклд! Онакл пнтнекм пбнс Ъл бвншкм ртн гвызнс, Л бвншкм ен пвбтсын, Ртн ткбваупкм збабсын";
    std::wstring encrypted_word = L"ОЛИМПИАДА";
    
    std::unordered_map<wchar_t, wchar_t> encryption_dict;
    for (int i = 0; i < encrypted_word.length(); i++) {
        encryption_dict[encrypted_word[i]] = encrypted_text[i];
    }
    
    std::wstring decrypted_word = L"";
    for (wchar_t letter : encrypted_word) {
        decrypted_word += encryption_dict[letter];
    }
    
    std::wcout.imbue(std::locale(""));
    std::wcout << decrypted_word << std::endl;
    
    return 0;
}