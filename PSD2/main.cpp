//
// Created by Ellie on 1/05/2024.
//
#include "Host.h"
#include "BlackCoffee.h"
#include "WhiteCoffee.h"

int main() {
    Host host;
    Order order;

    // Add drink items to the order
    order.addDrinkItem(new BlackCoffee());
    order.addDrinkItem(new WhiteCoffee());

    host.takeOrder(order);
    host.serveOrder(order);

    return 0;
}