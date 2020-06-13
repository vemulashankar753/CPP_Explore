#include <iostream>
#include <string>

using namespace std;

struct Node{
    int val;
    Node *next;
};

int main(){
    Node *n1 = NULL;
    Node *temp = NULL;
    Node *n = NULL;
    for(int i=0;i<5;i++){
        n = new Node;
        n->val = i;
        n->next = temp;
        temp = n;
    }
    
    n1 = temp;
    
    while(temp){
        cout << "value is:" << temp->val << endl;
        temp = temp->next;
    }

   cout << "Reverse a linkedlist " << endl;

   Node *n2 = n1;
   Node *n3 = NULL;

   while(n2){
      Node  *t1 = new Node;
      t1->val = n2->val;
      t1->next = n3;
      n3 = t1;
      n2 = n2->next;
   } 

    while(n3){
        cout << "value is:" << n3->val << endl;
        n3 = n3->next;
    }
    
    return 0;
}

