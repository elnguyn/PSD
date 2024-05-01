//
// Created by Ellie on 1/05/2024.
//
#ifndef ORDER_H
#define ORDER_H

#include "Food.h"
#include "Drink.h"
#include <vector>

class Order {
public:
    void addFoodItem(Food* food);
    void addDrinkItem(Drink* drink);
    std::vector<Food*>& getFoodItems();
    std::vector<Drink*>& getDrinkItems();
    bool isComplete();
private:
    std::vector<Food*> foodItems;
    std::vector<Drink*> drinkItems;
    bool complete;
};

#endif
//UNTITLED_ORDER_H
