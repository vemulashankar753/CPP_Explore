// C++ program to illustrate 
// is_class template 
  
#include <iostream> 
#include <type_traits> 
using namespace std; 
  
class GFG1 { 
    int var1; 
    float var2; 
    char var3; 
}; 
  
struct GFG2 { 
    union { 
        int var4; 
        float var5; 
    }; 
}; 
  
int main() 
{ 
    cout << boolalpha; 
    cout << "is_class:" << endl; 
    cout << "int: "
         << is_class<int>::value << endl; 
    cout << "GFG1: "
         << is_class<GFG1>::value << endl; 
    cout << "GFG2: "
         << is_class<GFG2>::value << endl; 
    return 0; 
} 
