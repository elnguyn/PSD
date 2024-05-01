//
// Created by Ellie on 22/04/2024.
//
#ifndef MANAGER_H
#define MANAGER_H

#include "Order.h"
#include "FoodMaker.h"
#include "CoffeeMaker.h"

class Manager {
public:
    void processOrder(Order& order);
    static void notifyOrderComplete(Order& order);
private:
    FoodMaker foodMaker;
    CoffeeMaker coffeeMaker;
};

#endif

//UNTITLED_MANAGER_H
