#include <iostream>
#include "SportInventory.h"
#include "Ball.h"
#include "Racket.h"

int main() {
    // СОЗДАНИЕ ОБЪЕКТОВ - РАЗНОЕ КОЛИЧЕСТВО ПАРАМЕТРОВ
    Ball ball1;                                      // 0 параметров (всё по умолчанию)
    Ball ball2("Теннисный мяч", 0.058, 200);         // 3 параметра (диаметр и материал по умолчанию)
    Ball ball3("Футбольный мяч", 0.45, 1500, 22.5, "Кожа"); // 5 параметров (все)

    Racket racket1;                                   // 0 параметров (всё по умолчанию)
    Racket racket2("Бадминтонная ракетка", 0.1, 2500); // 3 параметра (натяжение и тип по умолчанию)
    Racket racket3("Теннисная ракетка", 0.3, 5000, 25.0, "Теннисная"); // 5 параметров (все)

    // МАССИВ УКАЗАТЕЛЕЙ (как в примере)
    SportInventory* devices[] = {&ball1, &ball2, &ball3, &racket1, &racket2, &racket3};

    // Вызов методов у второго мяча через массив
devices[1]->displayInfo();      // 1. базовый
devices[1]->checkCondition();   // 2. базовый

dynamic_cast<Ball*>(devices[1])->bounce();
dynamic_cast<Ball*>(devices[1])->checkRebound();



    return 0;
}