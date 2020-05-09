#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
    public:
    string name;
    int age;
    virtual void getdata(){};
    virtual void putdata(){};
};

class Professor : public Person {

    public:

    int publications,cur_id;

    void getdata(){
        cout << "Enter the values of the publications and cur_id"<< endl;
        cin >> name >> age >> publications >> cur_id;
    }
    void putdata(){
        cout << name << " ";
        cout  << age << " ";
        cout << publications << " ";
        cout << cur_id << " ";
    }
};

class Student : public Person{

    private:
      int marks[6];
    public:
    void getdata(){
        cout << "Enter the values of the publications and cur_id"<< endl;
        cin >> name ;
        cin >> age ;
        for (int i = 0;i <sizeof(marks)/sizeof(int) ;i++){
            cin >> marks[i];
        }
    }
    void putdata(){
        int sum = 0;
        cout << name << " ";
        cout << age << " ";
        for (int i = 0;i <sizeof(marks)/sizeof(int) ;i++){
            sum = sum+marks[i];
        }
        cout << sum ;
    }
};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
