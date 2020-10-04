#include <iostream>
using namespace std;
class Test
{
private:
    int x;
public:
    explicit Test(int i) 
    {
        x = i;
        cout << "Called" << endl;
    }
};
 
int main()
{
    Test t(20);
   //Below line will throw an error, as the compiler wont allow implicit convertion 
  //  t = 30; // conversion constructor is called here.
    return 0;
}
