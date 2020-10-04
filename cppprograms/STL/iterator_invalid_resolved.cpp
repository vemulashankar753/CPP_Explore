#include <iostream>
#include <set>

using namespace std;

int main(){
    
    set<int> s1 {1,2,3,4,5};
    
    auto it = s1.begin();
        
    for(it;it != s1.end();++it){
            if(*it%2 == 1){
                s1.erase(*it);
                it = s1.begin();
            }
            cout << *it << endl;
        }
}
