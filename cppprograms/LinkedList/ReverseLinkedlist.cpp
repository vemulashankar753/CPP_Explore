#include <iostream>
#include <string>
#include <algorithm>
#include <set>


using namespace std;

struct Node{
    int a;
    Node *next;
};

void pushNode(Node** head, int val){
    Node* n1 = new Node();
    n1->a  = val;
    n1->next = *head;
    *head = n1;
}

void Displaylements(Node** head){
    Node* tmp = *head;
    while(tmp){
        cout << "linked list values are: " << tmp->a << endl;
        tmp = tmp->next;
    }
    
}

int main(){
    Node* head  = NULL;
    pushNode(&head,5);
    pushNode(&head,4);
    pushNode(&head,3);
    pushNode(&head,2);
    pushNode(&head,1);
    Displaylements(&head);
    
    Node* rev = NULL, *last = NULL;
    Node* tmp = head;
    
    while(tmp){
        Node* n1 = new Node();
        n1->a = tmp->a;
        n1->next = last;
        last = n1;
        rev = last;
        tmp = tmp->next;
    }
    
    //After reversing the linkedlist
    //rev->a = tmp->a;
    //rev->next = last;
    cout << "After reversing the linkedlist: " << endl;
    Displaylements(&rev);
    
 
}
