#ifndef SPORTINVENTORY_H
#define SPORTINVENTORY_H

#include <string>
#include <iostream>

class SportInventory {
protected:
    std::string name;
    double weight;
    double price;

public:
    // Конструктор с параметрами по умолчанию
    SportInventory(const std::string& n = "Неизвестно", double w = 0, double p = 0);
    
    virtual ~SportInventory();

    // Геттеры
    std::string getName() const;
    double getWeight() const;
    double getPrice() const;

    // Методы из задания
    void changePrice(double newPrice);
    virtual void displayInfo() const = 0;
    virtual void checkCondition() const = 0;
};

#endif