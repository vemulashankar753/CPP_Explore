//Floating Point division gives the output as "Inf" instead of crash
#include <iostream>
#include <string>

using namespace std;

int main(){
    int miles;
    int gallons;
    float milespergallons;
    
    cin >> miles;
    cin >> gallons;
    
    //milespergallons = miles/gallons;(4/0) //crash
   // milespergallons = static_cast<double>(miles)/gallons; // 4.0/0 , out put is: Inf, no crash,
    
    try{
        if(gallons == 0){
            throw 0;
            
        }
        milespergallons = static_cast<double>(miles)/gallons;
        cout << "the value of the milespergallons " << milespergallons << endl;
        
        
    }catch(int& ex){
         cerr << "Gallons is zero, so cannot divide by zero: " << ex << endl;
        
    }

}
