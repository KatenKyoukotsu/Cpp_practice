#include <iostream>
#include <string>

// Базовый класс "Фигура"
class Shape {
public:
    // Конструктор класса
    Shape(std::string color, double size) : color_(color), size_(size) {}

    // Метод для вывода информации о фигуре
    void displayInfo() const {
        std::cout << "Цвет: " << color_ << ", Размер: " << size_ << std::endl;
    }

private:
    std::string color_;
    double size_;
};

// Класс "Треугольник", наследующий от "Фигура"
class Triangle : public Shape {
public:
    // Конструктор класса
    Triangle(std::string color, double size, double side1, double side2, double side3)
        : Shape(color, size), side1_(side1), side2_(side2), side3_(side3) {}

    // Метод для вывода информации о треугольнике
    void displayTriangleInfo() const {
        displayInfo();
        std::cout << "Стороны: " << side1_ << ", " << side2_ << ", " << side3_ << std::endl;
    }

private:
    double side1_;
    double side2_;
    double side3_;
};

// Аналогично создайте классы "Квадрат" и "Круг" по аналогии с "Треугольником"

int main() {
    // Создаем объекты классов и вызываем их функции
    Triangle triangle("Красный", 5.0, 3.0, 4.0, 5.0);
    triangle.displayTriangleInfo();

    // Аналогично создайте объекты классов "Квадрат" и "Круг" и вызовите их функции

    return 0;
}
