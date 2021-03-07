//
// Created by Shankar Vemula on 2/7/21.
//

#ifndef FACTORYDP_DRINKFACTORY_H
#define FACTORYDP_DRINKFACTORY_H
#include "HotDrink.h"
#include "HotDrinkFactory.h"
#include <map>


class DrinkFactory{
    map<string, unique_ptr<HotDrinkFactory>> hot_factories;
public:
    DrinkFactory(){
        hot_factories["tea"] = make_unique<CoffeeFactory>();
        hot_factories["coffee"] = make_unique<TeaFactory>();
    }

    unique_ptr<HotDrink> make_drink(const string& name){
        auto drink = hot_factories[name]->make();
        drink->prepare(200);
        return drink;
    }
};


#endif //FACTORYDP_DRINKFACTORY_H

