#include <iostream>
#include <string>

class Car {
public:
    // Конструктор класса
    Car(std::string brand, std::string model, int year) 
        : brand_(brand), model_(model), year_(year) {}

    // Метод для вывода информации о автомобиле
    void displayInfo() const {
        std::cout << "Марка: " << brand_ << ", Модель: " << model_ << ", Год выпуска: " << year_ << std::endl;
    }

private:
    std::string brand_;
    std::string model_;
    int year_;
};

int main() {
    // Создаем массив объектов класса Car
    Car cars[] = {
        Car("Toyota", "Camry", 2020),
        Car("Honda", "Civic", 2019),
        Car("Ford", "Mustang", 2022)
    };

    // Выводим информацию о каждом автомобиле
    for (const auto& car : cars) {
        car.displayInfo();
    }

    return 0;
}
