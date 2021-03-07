//
//  ArraybasedCompdp.cpp
//  DesignPattern
//
//  Created by Shankar Vemula on 3/4/21.
//
//Array Based Composite Design Pattern
#include <iostream>
#include <array>
#include <numeric>
#include <algorithm>

using namespace std;

class Creature{
private:
    enum ctypes {strength,ability,intelligence, count};
    std::array<int,count> abilities;
    
    
public:
    
    void setStrength(int value){
        abilities[strength] = value;
    }
    int getStrength() const{
        return abilities[strength];
    }
    void setAbility(int value){
        abilities[ability] = value;
    }
    int getAbility() const{
        return abilities[ability];
    }
    void setIntelligence(int value){
        abilities[intelligence] = value;
    }
    int getIntelligence() const{
        return abilities[intelligence];
    }
    
    double average() const{
        return sum()/(double)count;
    }
    int sum() const{
        return accumulate(abilities.begin(),abilities.end(),0);
    }
    
    int* max() const{
        return *max_element(abilities.begin(),abilities.end());
    }
    
};

int main(){
    Creature orc;
    orc.setStrength(3);
    orc.setIntelligence(5);
    orc.setAbility(7);

    cout << "The orc has an avg stat of :"
         << orc.average()
        << " and a maximum stat of "
        << orc.max()
        << "\nt"
    << endl;
}

