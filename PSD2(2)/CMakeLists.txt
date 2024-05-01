cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled
        Manager.cpp
        Manager.h
        CoffeeMaker.cpp
        CoffeeMaker.h
        FoodMaker.cpp
        FoodMaker.h
        Host.cpp
        Host.h
        Order.cpp
        Order.h
        Food.cpp
        Food.h
        Drink.cpp
        Drink.h
        BlackCoffee.cpp
        BlackCoffee.h
        WhiteCoffee.cpp
        WhiteCoffee.h
        Muffin.cpp
        Muffin.h
        BananaBread.cpp
        BananaBread.h
)
