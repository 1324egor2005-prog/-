#include "Ball.h"

// Конструктор по умолчанию (0 параметров)
Ball::Ball() 
    : SportInventory("Стандартный мяч", 0.2, 500), diameter(20.0), material("Резина") {
    std::cout << "[Мяч] Создан объект с параметрами по умолчанию" << std::endl;
}

// Конструктор с 3 параметрами
Ball::Ball(const std::string& n, double w, double p)
    : SportInventory(n, w, p), diameter(22.0), material("Кожа") {
    std::cout << "[Мяч] Создан объект с 3 параметрами" << std::endl;
}

// Конструктор со всеми параметрами
Ball::Ball(const std::string& n, double w, double p, double d, const std::string& m)
    : SportInventory(n, w, p), diameter(d), material(m) {
    std::cout << "[Мяч] Создан объект со всеми параметрами" << std::endl;
}

double Ball::getDiameter() const { return diameter; }
std::string Ball::getMaterial() const { return material; }

void Ball::displayInfo() const {
    std::cout << "--- МЯЧ: " << name << " ---" << std::endl;
    std::cout << "  Вес: " << weight << " кг" << std::endl;
    std::cout << "  Цена: " << price << " руб." << std::endl;
    std::cout << "  Диаметр: " << diameter << " см" << std::endl;
    std::cout << "  Материал: " << material << std::endl;
}

void Ball::checkCondition() const {
    std::cout << name << ": ";
    if (diameter > 20.0) {
        std::cout << "мяч хорошо накачан" << std::endl;
    } else {
        std::cout << "мяч спущен, нужна подкачка" << std::endl;
    }
}

void Ball::bounce() const {
    std::cout << name << ": мяч подброшен!" << std::endl;
}

void Ball::checkRebound() const {
    double rebound = diameter * 0.5;
    std::cout << name << ": высота отскока " << rebound << " см" << std::endl;
}