#include <iostream>

// Абстрактный класс "Животное"
class Animal {
public:
    // Виртуальные функции "есть" и "пить"
    virtual void eat() const = 0;
    virtual void drink() const = 0;
};

// Класс "Кошка", наследующий от "Животное"
class Cat : public Animal {
public:
    // Реализация виртуальных функций
    void eat() const override {
        std::cout << "Кошка ест мясо" << std::endl;
    }

    void drink() const override {
        std::cout << "Кошка пьет молоко" << std::endl;
    }
};

// Класс "Собака", наследующий от "Животное"
class Dog : public Animal {
public:
    // Реализация виртуальных функций
    void eat() const override {
        std::cout << "Собака ест корм" << std::endl;
    }

    void drink() const override {
        std::cout << "Собака пьет воду" << std::endl;
    }
};

int main() {
    // Создаем объекты классов "Кошка" и "Собака" и вызываем их функции
    Cat cat;
    Dog dog;

    cat.eat();
    cat.drink();

    dog.eat();
    dog.drink();

    return 0;
}
