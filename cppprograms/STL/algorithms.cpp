
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <iterator>
#include <map>
#include <algorithm>


using namespace std;

template <typename T>
void display(std::vector<T> v){
    for(const auto &v1: v){
        cout << v1 << "  " ;
    }
};


class Person{
private:
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    string name;
    int id;
public:
    Person():name("default"),id(0){
        cout << "Default constructor is called:" << endl;
        cout << "name is:   " <<name << "id is: " << id << endl;
    }
    Person(string n,int i):name(n),id(i){
        cout << "Parameterizied constructor is called:" << endl;
        cout << "name is: " <<name << "id is: " << id << endl;

    }
    bool operator<( const Person& rhs) const{
        return this->id < rhs.id;

    }

    bool operator==(const Person& rhs) const{
        return (this->name == rhs.name && this->id == rhs.id);
    }

    ~Person(){
        cout << "Destructor is called: " << endl;
        cout << "name is: " <<name << "id is: " << id << endl;

    }
};

std::ostream& operator<<(std::ostream &os, const Person& p){
    os<< p.name << ":" << p.id;
    return os;
};

//find alogirthm
void test1(){
    vector<int> v1 {1,2,3,4,5,6};
    
    auto it = std::find(v1.begin(), v1.end(), 4);
    
    if (it != v1.end()){
        cout << "Element is found , its value is:"  << *it << endl;
    }else{
        cout << "Element is not found" << endl;
    }
    
    //To apply find algorithm on a userdefined class
    std::list<Person> lp {
        {"shankar", 1},
        {"krishna", 2},
        {"Krish", 3}
    };
    
    auto p = std::find(lp.begin(), lp.end(), Person{"Krishna",2});
    if (p != lp.end()){
        cout << "Person is found: their details are: " <<  endl;
    }else{
        cout << "Person not found" << endl;
    }

}

//count algorithm
void test2(){
    
    cout << "Count the no. of occurences of an element: " << endl;
    vector<int> v1 {1,2,3,4,5,6,1,1,2};
    
    auto n = std::count(v1.begin(), v1.end(), 1);
    
    cout << "The value 1 had these many occurences are there: " << n << endl;
        
}
//count_if algorithm

void countif(){
    cout <<"Count_if the no. of occurences of an element if a condition is met: " << endl;
    
    std::vector<int> v1 {1,2,3,4,5,6,7,8,9,10};
    cout << "Counting the the no of elements in a container: " << endl;
    int ne = std::count_if(v1.begin(), v1.end(), [](int x){ return x%2 == 0;});
    
    int no = std::count_if(v1.begin(), v1.end(), [](int x){ return x%2 !=0;});
    cout << "no. of even elements are: " << ne << endl;
    cout << "no. of odd elements are: " << no << endl;
    
    //find no. of elements greater than 5
    int n5 = std::count_if(v1.begin(), v1.end(), [](int x){ return x>=5; });
    cout << "no. of  elements greater than 5: " << n5 << endl;
}

void replace_test(){
    
    std::vector<int> v1 {1,2,3,4,5,6,7,8,9,10};
    for(auto &e: v1){
        cout << e << endl;
    }
    cout << "after replacing an element" << endl;
    std::replace(v1.begin(), v1.end(),1,100);
    
    for(auto &e: v1){
        cout << e << endl;
    }
    
}

void all_of_test(){
    
    std::vector<int> v1 {1,2,3,4,5,6,7,8,9,10};
    
    //std::all_of method return true or false, based on predicate which applies to all elements in the container
    
    if(std::all_of(v1.begin(),v1.end(), [](int x){return x>0;})){
        cout << "all elements are greater than zero: true" << endl;
    }else{
        cout << "all elements are not greater than zero: false" << endl;
    }
    if(std::all_of(v1.begin(),v1.end(), [](int x){return x>5;})){
           cout << "all elements are greater than 5: true" << endl;
    }else{
           cout << "all elements are not greater than 5: false" << endl;
    }
       
       
}

void transformtest(){
    std::string str {"This is shankar in mostly in lower case"};
    
     cout << "String before transform" << str << endl;
    
    std::transform(str.begin(),str.end(),str.begin(), ::toupper);
    
    cout << "String after transform" << str << endl;
}





int main(){
    //test1();
    //test2();
   //countif();
    //replace_test();
    //all_of_test();
    transformtest();
    return 0;
    
} 



