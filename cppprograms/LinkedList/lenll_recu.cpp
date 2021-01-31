#include <iostream>

using namespace std;


struct Node{
    int a;
    Node* next;
};

void addNode(Node** headref, int val){
    Node* n1 = new Node();
    n1->a = val;
    n1->next = *headref;
    *headref = n1;
}

void displayLL(Node** headref){
    Node* ref = *headref;
    while (ref) {
        cout << "Linked list element is: " << ref->a << endl;
        ref= ref->next;
    }
};

int lenghtofll(Node* ref){
    if(ref == NULL){
      return 0;
    }else{
      return 1 + lenghtofll(ref->next);
    }
}


int main(){
    
    Node* lklist = NULL;
    addNode(&lklist,1);
    addNode(&lklist,2);
    addNode(&lklist,3);
    addNode(&lklist,4);
    addNode(&lklist,5);
    displayLL(&lklist);

    cout << "Linked list length is: " << lenghtofll(lklist) << endl;
    
    return 0;
    

    
    
}
