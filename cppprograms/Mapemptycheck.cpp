#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main(){
    
    std::map<int,string> m1;
    vector<int> v1 {1,2,3,4,5};
    
    for(auto& e: v1){
        auto it = m1.find(e);
        if(it != m1.end()){
            cout << "Key found" << endl;
        }else{
            cout << "Key is not  found" << endl;
        }
        
    }
    m1.clear();
    
    return 0;
}
