//
// Created by Ellie on 1/05/2024.
//
#ifndef HOST_H
#define HOST_H

//#include "Order.h"
#include "Manager.h"

class Host {
public:
    void takeOrder(Order& order);
    void serveOrder(Order& order);
private:
    Manager manager;
};

#endif

//UNTITLED_HOST_H
