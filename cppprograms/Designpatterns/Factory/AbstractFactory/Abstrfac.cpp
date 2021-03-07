#include <iostream>
#include <math.h>
#include <sstream>
#include "DrinkFactory.h"


using namespace std;
//Factory Method design Pattern


int main() {
    std::cout << "Abstract Factory Method design pattern" << std::endl;

    DrinkFactory df;
    auto tdrink = df.make_drink("tea");


    return 0;
}

