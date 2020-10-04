
#include <iostream>

using namespace std;

void doubledata(int* val){
    *val = *val *2;
}

int main(){
    
    int value = 10;
    cout << "Value before: " << value << endl;
    doubledata(&value);
    cout << "Value After: " << value << endl;
    
     int *int_ptr {nullptr};
     int_ptr = &value;
    //Pointer to pointer passing
     doubledata(int_ptr);
     cout << "Value After: " << value << endl;
     cout << "*int_ptr After: " << *int_ptr << endl;

    return 0;
    
}
