//
// Created by Ellie on 1/05/2024.
//
#ifndef WHITECOFFEE_H
#define WHITECOFFEE_H

#include "Drink.h"
#include <string>

class WhiteCoffee : public Drink {
public:
    enum class MilkType { SoyMilk, AlmondMilk, OatMilk };
    enum class Type { Latte, Cappuccino, FlatWhite };

    WhiteCoffee(MilkType milkType, Type type)
            : milkType(milkType), type(type) {}

    std::string getName() override {
        std::string milkTypeStr;
        switch (milkType) {
            case MilkType::SoyMilk:
                milkTypeStr = "Soy Milk";
                break;
            case MilkType::AlmondMilk:
                milkTypeStr = "Almond Milk";
                break;
            case MilkType::OatMilk:
                milkTypeStr = "Oat Milk";
                break;
        }

        std::string typeStr;
        switch (type) {
            case Type::Latte:
                typeStr = "Latte";
                break;
            case Type::Cappuccino:
                typeStr = "Cappuccino";
                break;
            case Type::FlatWhite:
                typeStr = "Flat White";
                break;
        }

        return "White Coffee (" + milkTypeStr + ", " + typeStr + ")";
    }

private:
    MilkType milkType;
    Type type;
};

#endif
//UNTITLED_WHITECOFFEE_H
