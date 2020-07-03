//
//  custdel_sharptr.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 6/27/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test{
private:
    int a;
public:
    Test():a(0){
        cout << "Default constructor is called" << endl;
    }
    Test(int i):a(i){
        cout << "Parameter construtor is called" << endl;
    }
    int getData(){
        return a;
    }
    ~Test(){
        cout << "Destructor is called: data is: " << a << endl;
    }
};

/*std::unique_ptr<std::vector<shared_ptr<Test>>> make(){
    
    std::unique_ptr<std::vector<shared_ptr<Test>>> uv;
    
    return uv;
    
}*/

auto make(){
    return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}
void fill(std::vector<std::shared_ptr<Test>> &vec, int num){
    int temp;
    for(int i=0;i<num;++i){
        std::cout << "Enter data point" << endl;
        cin >> temp;
       /* shared_ptr<Test> t = make_shared<Test> (temp);
        vec.push_back(t);*/ //This will create a copy of the each shared ptr
        //Instead using the Rvalue reference you can directly
        vec.push_back(std::make_shared<Test>(temp));
    }
}
void display(const std::vector<std::shared_ptr<Test>> &vec){
    std::cout << "\n Displaying vector data" << endl;
    std::cout << "=========================" << endl;
    for(const auto& v: vec){
        cout << v->getData() << endl;
    }
}

int main(){
    int n;
    std::unique_ptr<std::vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    std::cout << "How many data points needs to be inserted" << endl;
    std::cin >> n;
    fill(*vec_ptr,n);
    
    return 0;

}

