//
// Created by Ellie on 1/05/2024.
//
#include <iostream>
#include "Host.h"
using namespace std;

void Host::takeOrder(Order& order) {
    cout << "Order received" << endl;
    manager.processOrder(order);
}

void Host::serveOrder(Order& order) {
    std::cout << "Serving order for Patron." << std::endl;
    // Serve the order to the Patron
}

