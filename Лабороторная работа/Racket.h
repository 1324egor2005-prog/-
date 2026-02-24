#ifndef RACKET_H
#define RACKET_H

#include "SportInventory.h"

class Racket : public SportInventory {
private:
    double tension;
    std::string racketType;

public:
    // Три конструктора (разное количество параметров)
    Racket();  // 0 параметров
    Racket(const std::string& n, double w, double p);  // 3 параметра
    Racket(const std::string& n, double w, double p, double t, const std::string& rt);  // 5 параметров

    // Геттеры
    double getTension() const;
    std::string getRacketType() const;

    // Переопределенные методы
    void displayInfo() const override;
    void checkCondition() const override;

    // Собственные методы
    void restring(double newTension);
    void adjustHandle() const;
};

#endif