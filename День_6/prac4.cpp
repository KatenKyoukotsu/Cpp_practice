#include <iostream>

// Интерфейс "Компьютер"
class Computer {
public:
    // Виртуальные методы "включить", "выключить" и "перезагрузить"
    virtual void turnOn() const = 0;
    virtual void turnOff() const = 0;
    virtual void reboot() const = 0;
};

// Класс "Ноутбук", реализующий интерфейс "Компьютер"
class Laptop : public Computer {
public:
    // Реализация виртуальных методов
    void turnOn() const override {
        std::cout << "Ноутбук включен" << std::endl;
    }

    void turnOff() const override {
        std::cout << "Ноутбук выключен" << std::endl;
    }

    void reboot() const override {
        std::cout << "Ноутбук перезагружается" << std::endl;
    }
};

// Класс "Настольный компьютер", реализующий интерфейс "Компьютер"
class DesktopComputer : public Computer {
public:
    // Реализация виртуальных методов
    void turnOn() const override {
        std::cout << "Настольный компьютер включен" << std::endl;
    }

    void turnOff() const override {
        std::cout << "Настольный компьютер выключен" << std::endl;
    }

    void reboot() const override {
        std::cout << "Настольный компьютер перезагружается" << std::endl;
    }
};

int main() {
    // Создаем объекты классов "Ноутбук" и "Настольный компьютер" и вызываем их методы
    Laptop laptop;
    DesktopComputer desktop;

    laptop.turnOn();
    laptop.turnOff();
    laptop.reboot();

    desktop.turnOn();
    desktop.turnOff();
    desktop.reboot();
}
