#include <iostream>
using namespace std;

int main(){

  int arr[] {1,2,3,4,5};
  cout << arr << endl; //address of 1st eleement of the array
  cout << *arr << endl; //1st element of teh array is printed

  int *arr_ptr {arr};
  cout << arr_ptr << endl; //Same address of the 1st element of the above address;
  cout << *arr_ptr << endl; //1

  cout << arr_ptr[0] << endl;
  cout << arr_ptr[1] << endl;
  cout << arr_ptr[2] << endl;
  cout << arr_ptr[3] << endl;

  cout << arr_ptr << endl;
  cout << arr_ptr+1 << endl;
  cout << arr_ptr+2 << endl;
  cout << arr_ptr+3 << endl;

  cout << "Pointer offset Notation" << endl;

  //Pointer offset notation  
  cout << *arr_ptr << endl;
  cout <<*(arr_ptr+1) << endl;
  cout << *(arr_ptr+2) << endl;
  cout << *(arr_ptr+3) << endl;

  cout << "Array offset Notation" << endl;

  //Array offset notation
  cout << *arr << endl;
  cout <<*(arr+1) << endl;
  cout << *(arr+2) << endl;
  cout << *(arr+3) << endl;

  return 0;
} 
