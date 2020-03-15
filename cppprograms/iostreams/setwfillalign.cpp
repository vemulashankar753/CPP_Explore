#include <iostream>
#include <iomanip>
using namespace std;

void ruler(){
	cout << "12345678901234567890123456789012345678901234567890" << endl;
}
int main() {

	//default behavior
	int i = 1234;
	double j = 1234.5678;
	string hello = "Hello";
	ruler();
	cout << i
		 << j
		 << hello
		 << endl;

//	return 0;

        //setwidth, here applies to only i, its deault right justified
        ruler();
        cout << setw(10)
                 << i
                 << j
                 << hello
                 << endl;

        //setwidth, here applies to only i,default justification is right
        ruler();
        cout << setw(10)
                 << i
                 <<setw(10)
                 << j
                 <<setw(10)
                 << hello
                 << endl;
           
        //setwidth, here applies to only i,default justification is right
        ruler();
        cout << setw(10) << right
                 << i
                 <<setw(10) << right
                 << j
                 <<setw(10) << right
                 << hello
                 << endl;

        cout << "testing code" << setfill('*') ;
                 cout << i 
                 << endl;
 
        //setwidth, left  justification 
        ruler();
        cout << setw(10) << left
                 << i
                 <<setw(10) << left
                 << j
                 <<setw(10) << left
                 << hello
                 << endl;

        //setwidth, here applies to only i,default justification is right
        ruler();
        cout << setw(10)
                 << i
                 <<setw(10)
                 << j
                 <<setw(10)
                 << hello
                 << endl;
        cout << "using the setfill " << endl;
        cout << setfill('-');   
        ruler();
        cout << setw(10)
                 << i
                 <<setw(10)
                 << j
                 <<setw(10)
                 << hello
                 << endl;
        cout << "setting setfill for each varialbe of the print" << endl;
        cout << setw(10) << setfill('*')
                 << i 
                 <<setw(10) << setfill('-')
                 << j
                 <<setw(10) << setfill('%')
                 << hello
                 << endl;

        ruler();
        cout << setw(20) << i << endl;
           
	return 0;
}
