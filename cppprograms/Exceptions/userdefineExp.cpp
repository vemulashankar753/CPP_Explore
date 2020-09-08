#include <iostream> 
using namespace std; 
  
class demo1 { 
}; 
  
class demo2 { 
}; 
  
int main() 
{ 
    int x = 10;
    for (int i = 0; i <= 3; i++) { 
        try { 
            if (i == 1) 
                throw demo1(); 
  
            else if (i == 2) 
                throw demo2(); 
            else 
            int j =  (x/i); 

        } 
  
        catch (demo1 d1) { 
            cout << "Caught exception of demo1 class \n"; 
        } 
  
        catch (demo2 d2) { 
            cout << "Caught exception of demo2 class \n"; 
        } 

        catch (std::exception& e){
           cout << "std exception is called: " << endl;
        }
    } 
} 
