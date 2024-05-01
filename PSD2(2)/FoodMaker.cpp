//
// Created by Ellie on 22/04/2024.
//

#include <iostream>
#include "FoodMaker.h"
#include "Muffin.h"
#include "BananaBread.h"

void FoodMaker::makeFoodItems(std::vector<Food*>& foodItems) {
    // Make the food items
    for (Food* food : foodItems) {
        if (Muffin* muffin = dynamic_cast<Muffin*>(food)) {
            std::cout << "Making " << muffin->getName() << "." << std::endl;
        } else if (BananaBread* bananaBread = dynamic_cast<BananaBread*>(food)) {
            std::cout << "Making " << bananaBread->getName() << "." << std::endl;
        }
    }
}