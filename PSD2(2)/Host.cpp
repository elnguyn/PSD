//
// Created by Ellie on 1/05/2024.
//
#include <iostream>
using namespace std;

#include "Host.h"
#include "Muffin.h"
#include "BananaBread.h"
#include "BlackCoffee.h"
#include "WhiteCoffee.h"

void Host::takeOrder(Order& order) {
    // Add food items to the order
    order.addFoodItem(new Muffin());
    order.addFoodItem(new BananaBread());

    // Add drink items to the order
    order.addDrinkItem(new BlackCoffee());
    order.addDrinkItem(new WhiteCoffee(WhiteCoffee::MilkType::SoyMilk, WhiteCoffee::Type::Latte));

    manager.processOrder(order);
}

void Host::serveOrder(Order& order) {
    std::cout << "Serving order for Patron." << std::endl;
    // Serve the order to the Patron
}


int main() {
    Host host;
    Order order;
    host.takeOrder(order);
    host.serveOrder(order);
    return 0;
}


