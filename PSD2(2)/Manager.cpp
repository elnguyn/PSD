//
// Created by Ellie on 22/04/2024.
//
#include <iostream>
#include "Manager.h"
using namespace std;



void Manager::notifyOrderComplete(Order& order) {
    // Notify the Host that the order is complete
    std::cout << "Order is complete." << std::endl;
}
void Manager::processOrder(Order& order) {
    // Give the order to the FoodMaker and CoffeeMaker
    foodMaker.makeFoodItems(order.getFoodItems());
    coffeeMaker.makeCoffeeItems(order.getDrinkItems());

    // Wait for the order to be complete
    while (!order.isComplete()) {
        // Do nothing
        cout << "Making order" << endl;
    }

    // Notify the Host that the order is complete
    notifyOrderComplete(order);
}


