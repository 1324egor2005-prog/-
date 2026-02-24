#include "Racket.h"

// Конструктор по умолчанию (0 параметров)
Racket::Racket() 
    : SportInventory("Стандартная ракетка", 0.25, 1000), tension(20.0), racketType("Любительская") {
    std::cout << "[Ракетка] Создан объект с параметрами по умолчанию" << std::endl;
}

// Конструктор с 3 параметрами
Racket::Racket(const std::string& n, double w, double p)
    : SportInventory(n, w, p), tension(22.0), racketType("Стандартная") {
    std::cout << "[Ракетка] Создан объект с 3 параметрами" << std::endl;
}

// Конструктор со всеми параметрами
Racket::Racket(const std::string& n, double w, double p, double t, const std::string& rt)
    : SportInventory(n, w, p), tension(t), racketType(rt) {
    std::cout << "[Ракетка] Создан объект со всеми параметрами" << std::endl;
}

double Racket::getTension() const { return tension; }
std::string Racket::getRacketType() const { return racketType; }

void Racket::displayInfo() const {
    std::cout << "--- РАКЕТКА: " << name << " ---" << std::endl;
    std::cout << "  Вес: " << weight << " кг" << std::endl;
    std::cout << "  Цена: " << price << " руб." << std::endl;
    std::cout << "  Натяжение: " << tension << " кг" << std::endl;
    std::cout << "  Тип: " << racketType << std::endl;
}

void Racket::checkCondition() const {
    std::cout << name << ": ";
    if (tension >= 20.0) {
        std::cout << "натяжение в норме" << std::endl;
    } else {
        std::cout << "слабое натяжение, нужна перетяжка" << std::endl;
    }
}

void Racket::restring(double newTension) {
    tension = newTension;
    std::cout << name << ": перетянута до " << tension << " кг" << std::endl;
}

void Racket::adjustHandle() const {
    std::cout << name << ": рукоятка отрегулирована" << std::endl;
}