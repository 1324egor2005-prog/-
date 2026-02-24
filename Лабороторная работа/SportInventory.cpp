#include "SportInventory.h"

SportInventory::SportInventory(const std::string& n, double w, double p)
    : name(n), weight(w), price(p) {}

SportInventory::~SportInventory() {}

std::string SportInventory::getName() const { return name; }
double SportInventory::getWeight() const { return weight; }
double SportInventory::getPrice() const { return price; }

void SportInventory::changePrice(double newPrice) {
    if (newPrice >= 0) {
        price = newPrice;
        std::cout << name << ": цена изменена на " << newPrice << " руб." << std::endl;
    }
}