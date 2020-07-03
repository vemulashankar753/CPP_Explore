#include <iostream>
#include <vector>

using namespace std;


int main(){
    vector<int> v1 {1,2};
    vector<int> v2 {1,2,3};
 
    auto it = v1.begin();
    auto itr = v2.begin();
    
    for(it,itr; it != v1.end(),itr != v2.end();++it,++itr){
        cout << "iterator values are: " << *it << " iterator 2 is" << *itr << endl;
    }
    
    return 0;
}

