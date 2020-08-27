
#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> v1 {1,2,3,4,5,6};
    vector<int> v2;
    
    v2 = std::move(v1);
    cout << v1.size() << endl;
    v1.push_back(1);    
    cout << v1.size() << endl;
    cout << v2.size() << endl;
    
    return 0;
    
    
}
