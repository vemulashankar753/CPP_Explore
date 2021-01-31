//
//  mac_str.cpp
//  
//
//  Created by Shankar Vemula on 9/11/20.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <set>


using namespace std;

struct Node{
    int a;
    Node *next;
};

std::set<Node*> st;

void pushNodeatbegin(Node **head, int val){
    Node* n = new Node();
    n->a = val;
    n->next = *head;
    *head = n;
}

void Displayelements(Node **head){
    Node* tmp = *head;
    int x = -1;
    while(tmp){
        if(x == tmp->a)
            break;
        x = tmp->a;
        cout << "Linked list values are: " << tmp->a << endl;
        tmp = tmp->next;
    }
}

void insertNodeat(Node **head,Node *t){
    cout << "Insert node is done: "<< endl;
    Node* tmp = *head;
    while(tmp->next){
        cout << "tmp value  is: "<< tmp->a << endl;
        tmp = tmp->next;
    }
    cout << "tmp value  is: "<< tmp->a << endl;

    tmp->next = t;
}

bool CheckifitLoop(Node **head){
    Node* tmp = *head;
    while(tmp){
       cout << "Iterating the Linkedlist: " << tmp->a << endl;
       auto it = st.find(tmp);
       if( it != st.end()){
           cout << "Loop found at " << tmp->a << endl;
           return true;
       }else{
           st.insert(tmp);
       }
       tmp = tmp->next;
    }
    return false;
    
}

int main(){
    
    Node *head = NULL;
    
    pushNodeatbegin(&head,1);
    pushNodeatbegin(&head,2);
    pushNodeatbegin(&head,3);
    pushNodeatbegin(&head,4);
    pushNodeatbegin(&head,5);
    Displayelements(&head);
    Node* t = head->next->next;
    insertNodeat(&head,t);
    CheckifitLoop(&head);
    return 0;
    
}



