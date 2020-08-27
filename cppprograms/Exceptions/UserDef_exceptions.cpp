//
//  Exeption1.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 8/8/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

//Floating Point division gives the output as "Inf" instead of crash

#include <iostream>
#include <string>

using namespace std;

class DividebyZeroException{
    
};

class NegativeValueException{
    
};

float milespergallons(int miles, int gallons){
    if(gallons == 0){
        throw DividebyZeroException();
    }
    if(gallons < 0 ){
        throw NegativeValueException();
    }
    
    return static_cast<double>(miles)/gallons;
    
};

int main(){
    int miles;
    int gallons;
    float mpg;
    cout << "Enter miles: "  << endl;
    cin >> miles;
    cout << "Enter the gallons: " << endl;
    cin >> gallons;
    
    try {
        mpg = milespergallons(miles, gallons);
    }catch(const DividebyZeroException& de){
        cout << "The values of the gallons is zero" << endl;
    }catch(const NegativeValueException& ne){
        cout << "The value of the gallons is a negative value" << endl;
    }
    
    cout << "Miles per Gallons value is: " << mpg << endl;
    
    return 0;
}
