//
// Created by Ellie on 1/05/2024.
//
#ifndef BLACKCOFFEE_H
#define BLACKCOFFEE_H

#include "Drink.h"

class BlackCoffee : public Drink {
public:
    std::string getName() override { return "Black Coffee"; }
};

#endif

//BLACKCOFFEE_H
