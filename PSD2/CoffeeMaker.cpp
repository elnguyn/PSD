//
// Created by Ellie on 22/04/2024.
//
#include <iostream>
#include "CoffeeMaker.h"
#include "BlackCoffee.h"
#include "WhiteCoffee.h"
using namespace std;

void CoffeeMaker::makeCoffeeItems(std::vector<Drink*>& coffeeItems) {
    // Make the coffee items
    for (Drink* coffee : coffeeItems) {
        if (BlackCoffee* blackCoffee = dynamic_cast<BlackCoffee*>(coffee)) {
            std::cout << "Making " << blackCoffee->getName() << "." << std::endl;
        } else if (WhiteCoffee* whiteCoffee = dynamic_cast<WhiteCoffee*>(coffee)) {
            std::cout << "Making " << whiteCoffee->getName() << "." << std::endl;
        }

    }
    std::cout << "Coffee made" << endl;
}
