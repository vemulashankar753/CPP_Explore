//
// Created by Shankar Vemula on 2/7/21.
//

#ifndef FACTORYDP_HOTDRINK_H
#define FACTORYDP_HOTDRINK_H

#include <iostream>
#include <memory>
#include <string>

using namespace std;

struct HotDrink{
    virtual ~HotDrink() = default;
    virtual void prepare(int volume) = 0;
};

struct Tea: HotDrink{
    void prepare(int volume) override{
        cout << "Take tea bag, boil water, pour :  " << volume << "ml,add some lemon " << endl;
    }
};

struct Coffee: HotDrink{
    void prepare(int volume) override{
        cout << "Take coffee beans, boil water, pour :  " << volume << "ml,add some milk " << endl;
    }
};

#endif //FACTORYDP_HOTDRINK_H


