#include <iostream>
#include <vector>

using namespace std;

typedef struct Node {
   int data;
   Node(){
    data = 0;
    cout << "default const. is called:  " << this << endl;
   };

  //Copy Constructor
   Node(const Node &n){
     data = n.data;
     cout << "copy const  is called: " << this <<  "  source: " << &n <<  endl;
   };

   ~Node(){
     data = 0;
     cout << "destuct  is called:  " << this << endl;
   };
   
} Node;  

int main(){

   std::vector<Node> v1;
   Node n1,n2;
//   v1.push_back(n1);
//   v1.push_back(n1);
   v1.emplace_back(n1);
   v1.emplace_back(n2);
   return 0;
}
  
