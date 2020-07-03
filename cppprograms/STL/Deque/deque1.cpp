#include <iostream>
#include <vector>
#include <deque>

using namespace std;

template <typename T>
void display(std::deque<T> d){
    cout << "Iterating through the deque" << endl;
    for(const auto& ele: d){
        cout <<ele << " :";
    }
    cout << endl;
}

void test1(){
    cout << "Test1 =========>" << endl;
    deque<int> d1 {1,2,3,4,5};
    display(d1);
    d1 = {6,7,8,9,10};
    display(d1);
    
    deque<int> d2 (10,7);
    display(d2);
    d1[2] = 21;
    d1.at(4) = 22;
    display(d1);
 
};

void test2(){
    cout << "Test2 =========>" << endl;
    deque<int> d1 {0,0,0};
    display(d1);
    
    d1.push_back(100);
    d1.push_back(200);
    
    d1.push_front(300);
    d1.push_front(400);
    
    display(d1);
    
    cout << "front is " << d1.front() << endl;
    cout << "back is " << d1.back() << endl;
    cout << "back is " << d1.size() << endl;
    cout << "back is " << d1.max_size() << endl;
    
    d1.pop_back();
    d1.pop_front();
    
    display(d1);

}

void test4(){
    cout << "Test4 =========>" << endl;
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;
    
    for(const auto &e: vec){
        d.push_back(e);
    }
    display(d);
    
    d.clear();
    
    for(const auto &e: vec){
        d.push_front(e);
    }
    
    display(d);
}

void test5(){
    cout << "Test5 =========>" << endl;
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;
    //Using the STL Algorithms
    std::copy(vec.begin(), vec.end(),std::front_inserter(d));
    display(d);
    
    d.clear();
    std::copy(vec.begin(), vec.end(),std::back_inserter(d));
    display(d);
    
    
    
}

int main(){
    test1();
    test2();
    test4();
    test5();
    return 0;
    
}

