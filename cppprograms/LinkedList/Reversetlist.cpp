#include <iostream>


using namespace std;

struct Node{
    int a;
    Node* next;
};

void addNodewithValue(Node** head,int n){
    Node* nnode = new Node();
    nnode->a = n;
    nnode->next = *head;
    *head = nnode;
};

int main(){
    Node* head = NULL;

    addNodewithValue(&head,1);
    addNodewithValue(&head,2);
    addNodewithValue(&head,3);
    addNodewithValue(&head,4);
    addNodewithValue(&head,5);

    cout << "displaying the linked list elements" << endl;

    Node* pr = head;
  
    while(pr){
     cout << pr->a << endl;
     pr = pr->next;
    }
    
    Node* rev = NULL, *temp = NULL;
    Node* headcopy = head;

    while(headcopy){
        cout << "Crash is started here" << endl;
        rev = new Node();
        rev->a = headcopy->a;
        rev->next = temp;
        temp = rev;
//        rev = temp; //This line is not neede at all.
        headcopy = headcopy->next;
    }

    Node* pr1 = rev;
  
    while(pr1){
     cout << pr1->a << endl;
     pr1 = pr1->next;
    }

    return 0;
}

