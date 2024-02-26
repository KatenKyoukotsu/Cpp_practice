def binary_encoding(letter):
    index = ord(letter) - ord('А')  # Получаем порядковый номер буквы
    binary = bin(index)[2:].zfill(6)  # Преобразуем в двоичную запись длиной 6
    return binary

def encrypt_message(message):
    encoded_message = ''
    disk_position = 0

    for letter in message:
        if letter == ' ':
            encoded_message += '000000'  # Кодируем пробел
        else:
            encoded_message += binary_encoding(letter)  # Кодируем букву
            disk_position = (disk_position + 1) % 32  # Вращаем диск на один сектор

    return encoded_message

word = 'СЕРВЕР'
encoded_word = encrypt_message(word)

first_pair = encoded_word[:12]
second_pair = encoded_word[12:24]
third_pair = encoded_word[24:36]

first_decimal = int(first_pair, 2)
second_decimal = int(second_pair, 2)
third_decimal = int(third_pair, 2)

# Выводим три десятичных числа
print(first_decimal, second_decimal, third_decimal)