//
// Created by Ellie on 1/05/2024.
//
#include <iostream>
#include "Order.h"

void Order::addFoodItem(Food* food) {
    foodItems.push_back(food);
    complete = false;
}

void Order::addDrinkItem(Drink* drink) {
    drinkItems.push_back(drink);
    complete = false;
}

std::vector<Food*>& Order::getFoodItems() {
    return foodItems;
}

std::vector<Drink*>& Order::getDrinkItems() {
    return drinkItems;
}

bool Order::isComplete() {
    return true;
}
