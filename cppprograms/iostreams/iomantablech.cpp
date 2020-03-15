#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

struct City{
   string name;
   unsigned long pol;
   double price;
} ;

struct Country{
    string cuntry;
    vector<City> vcities;
};

struct Tour{
    string title;
    vector<Country> vtour;
};

void fun(){
    cout << "1234567890123456789012345678901234567890123456789012345678901234567890" << endl;
}

int main()
{
   string num = "";
   cout << "Hello World" << endl; 
   
   Tour t1 { "MainTourna",
  {
    {
     "India", 
     { 
       {"hyderabad", 100000, 200.00},
       {"bangalore", 200000, 300.00},
       {"chennai", 300000, 400.00},
      }
    },

    {
     "China", 
     { 
       {"Beijing", 100000, 200.00},
       {"Hongkong", 200000, 300.00},
       {"Shanghai", 300000, 400.00},
     }
    },

    {
     "USA", 
     { 
       {"Newyork", 100000, 200.00},
       {"Virginia", 300000, 400.00},
     }
    }
  }
};

fun();
cout << setw(40);
cout << t1.title << endl;
cout << setw(15) << left << "country";
cout << setw(15) << left << "city";
cout << setw(15) << left << "population";
cout << setw(15) << left << "price" << endl;

cout << setfill('*') << setw(70) <<num ;
cout << endl;


for (auto cnt: t1.vtour){
    cout << cnt.cuntry << endl;
    
    /*for(auto ct:cnt.vcities){
        cout << ct.name << endl;
        cout << ct.pol << endl;
        cout << ct.price << endl;
    }*/
    
   /* for(auto ct:cnt.vcities){
        cout << "\t";
        cout << ct.name << "\t" << ct.pol << "\t" << ct.price << endl;
    }*/
    for(auto ct:cnt.vcities){
        cout << setfill(' ') << setw(22) << right << ct.name;
        cout << setw(15) << ct.pol;
        cout << setw(15) << ct.price;
        cout << endl;
    }
    
};
   
      
   
   return 0;
}

/**output is***/
1234567890123456789012345678901234567890123456789012345678901234567890
                              MainTourna
country        city           population     price          
/**********************************************************************
India
             hyderabad         100000            200
             bangalore         200000            300
               chennai         300000            400
China
               Beijing         100000            200
              Hongkong         200000            300
              Shanghai         300000            400
USA
               Newyork         100000            200
              Virginia         300000            400

*******/
