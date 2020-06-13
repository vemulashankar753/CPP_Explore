#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}

bool Money::operator==( const Money& m2){
    if (this->dollars == m2.dollars && this->cents == m2.cents){
        return true;
    }else{
        return false;
    }
}

bool Money::operator!=(const Money& m1){
    if (this->dollars != m1.dollars && this->cents != m1.cents){
        return true;
    }else{
        return false;
    }
}
    
   

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----



//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----



