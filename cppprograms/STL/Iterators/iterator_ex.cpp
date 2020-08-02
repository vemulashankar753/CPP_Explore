#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>


using namespace std;

template <typename T>
void display(std::vector<T> v){
    for(const auto &v1: v){
        cout << v1 << "  " ;
    }
};

void test1(){
    
    vector<int> vec {1,2,3,4,5,6};
    auto it = vec.begin();
    
    cout << "iterator element is: " << *it << endl;
    
    it++;
    
    cout << "iterator element is: " << *it << endl;
    
    it = it+2;
    
    cout << "iterator element is: " << *it << endl;
    
    it -= 2;
    
     cout << "iterator element is: " << *it << endl;
    
    it = vec.end()-1;
     cout << "iterator element is: " << *it << endl;
    
    
}

void test2(){
    
    vector<int> vec {1,2,3,4,5,6};
    vector<int>::iterator it = vec.begin();
    
    while(it != vec.end()){
        cout << *it << " ";
        ++it;
    }
    
    it = vec.begin(); //initalizes all the elements to zero
    while(it != vec.end()){
        *it= 0;
        ++it;
    }
    
    display(vec);
    
    
}

void test3(){
    cout << "Constant Iterators using the vector: " << endl;
    vector<int> vec {1,2,3,4,5,6};
    vector<int>::const_iterator cit = vec.begin();
    // auto cit = vec.cbegin();
    
    while(cit != vec.end()){
        cout << *cit << endl;
        cit++;
    }
    
    //Try to mdoify the cit, it will give an error
    cit = vec.begin();
    while (cit != vec.end()){
       // *cit = 0; //as its a constant iterator, it will not allow to modify , compilaton iterator
        cout << *cit << " ";
        ++cit;
    }
}

void test4(){
   cout << "Reverse Iterators using the vector: " << endl;
    
   vector<int> vec {1,2,3,4,5,6};
    
    auto rit = vec.rbegin();
    
    while (rit != vec.rend()){
        cout << *rit << endl;
        ++rit;
    }
    //Constant Reverse Iterators
    /*rit = vec.crbegin();
    while(rit != vec.crend()){
        cout << *rit << " ";
        ++rit;
    } */
    
    std::map<string,string> favorites {
        {"Frank", "c++"},
        {"bill", "java"},
        {"James", "Hasket"}
    };
    
    auto mit = favorites.begin();
    while (mit != favorites.end()){
        cout << "first: " << mit->first << "second: " << mit->second << endl;
        mit++;
    }
    
}

void test5(){
    cout << "Iterate over a subset of elements: " << endl;
    
    vector<int> vec {1,2,3,4,5,6};
    
    auto start = vec.begin() + 2;
    auto end = vec.end()-2;
    while (start != end){
        cout << *start << endl;
        start++;
    }
    
    
}


int main(){
    
   // vector<int> vec {1,2,3,4,5,6};
    //display(vec);
   // test1();
    // test2();
    //test3();
  //  test4();
   test5();
    
    return 0;

}



