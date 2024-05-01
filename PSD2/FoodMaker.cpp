//
// Created by Ellie on 22/04/2024.
//

#include <iostream>
#include "FoodMaker.h"

void FoodMaker::makeFoodItems(std::vector<Food*>& foodItems) {
    // Make the food items
    for (Food* food : foodItems) {
        std::cout << "Making " << food->getName() << "." << std::endl;
    }
}