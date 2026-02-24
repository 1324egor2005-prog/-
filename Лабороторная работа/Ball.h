#ifndef BALL_H
#define BALL_H

#include "SportInventory.h"

class Ball : public SportInventory {
private:
    double diameter;
    std::string material;

public:
    // Три конструктора (разное количество параметров)
    Ball();  // 0 параметров
    Ball(const std::string& n, double w, double p);  // 3 параметра
    Ball(const std::string& n, double w, double p, double d, const std::string& m);  // 5 параметров

    // Геттеры
    double getDiameter() const;
    std::string getMaterial() const;

    // Переопределенные методы
    void displayInfo() const override;
    void checkCondition() const override;

    // Собственные методы
    void bounce() const;
    void checkRebound() const;
};

#endif