// overload_date.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

class Date
{
    int mo, da, yr;
public:
    Date(int m, int d, int y)
    {
        mo = m; da = d; yr = y;
    }
    friend ostream& operator<<(ostream& os, const Date& dt);

 //The below implementation(without friend function, compiler throws an exception, as the << operator is trying to access the private variables of the class, it must be a friend)
/*    ostream& operator<<(ostream& os, const Date& dt){
      os << dt.mo  << '/' << dt.da << '/' << dt.yr;
      return os;
    } */
};

ostream& operator<<(ostream& os, const Date& dt)
{
    os << dt.mo << '/' << dt.da << '/' << dt.yr;
    return os;
} 

int main()
{
    Date dt(5, 6, 92);
    cout << dt;
}
