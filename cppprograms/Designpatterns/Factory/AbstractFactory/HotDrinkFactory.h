//
// Created by Shankar Vemula on 2/7/21.
//

#ifndef FACTORYDP_HOTDRINKFACTORY_H
#define FACTORYDP_HOTDRINKFACTORY_H


//Abstract Factory

#include "HotDrink.h"

struct  HotDrinkFactory{
    virtual unique_ptr<HotDrink> make() const = 0;
};

struct TeaFactory: HotDrinkFactory{
    unique_ptr<HotDrink> make() const override{
        return make_unique<Tea>();
    }
};

struct CoffeeFactory: HotDrinkFactory{
    unique_ptr<HotDrink> make() const override{
        return make_unique<Coffee>();
    }
};



#endif //FACTORYDP_HOTDRINKFACTORY_H

