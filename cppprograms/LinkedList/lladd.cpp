
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


struct Node{
    int a;
    Node *next;
};

void pushNode(Node **head,int v){
    cout << "Pushing the Node :" << v << endl;
    Node* n1 = new Node();
    n1->a = v;
    n1->next = *head;
    *head = n1;
};

void pushNodeatLast(Node **head,int v){
    Node *last = *head;
    Node* n1 = new Node();
    n1->a = v;
    n1->next = NULL;
    while(last->next){
        last = last->next;
    }
    last->next = n1;
};

void Displayll(Node **head){
    Node* last = *head;
    while(last){
        cout << "Value of the each node: "<< (last->a) << endl;
        last = last->next;
    }
};

//Insert element after a particular value
void insEleminbw(Node **head, int eleafter, int insertval){
   Node *headref = *head;
   while(headref){
     if(headref->a == eleafter){
        Node *n1 = new Node();
        n1->a = insertval;
        n1->next = headref->next;
        headref->next = n1;
     }
     headref = headref->next;
  }
}

        
       
   

int main(){
    
    Node *head = NULL;
    pushNode(&head,1);
    pushNode(&head,2);
    pushNode(&head,3);
    pushNode(&head,4);
    pushNode(&head,5);
    Displayll(&head);
    pushNodeatLast(&head,6);
    Displayll(&head);
    insEleminbw(&head,3,8);
    Displayll(&head);
    return 0;
}


