#include <iostream>

using namespace std;

struct Node {
   int val;
   Node *next;
};
//Adding a Node in the beginning

void appendnode(Node* headref, int v){
   cout << "appending the node " << endl;   

   if(headref == NULL){
     cout << "Entered here for the 1st time" << endl;
     headref = new Node();
     headref->val = v;
     headref->next = NULL;
   }else{
     cout << "Entered here for the 2nd  time" << endl;
      Node* newNode = new Node();
      newNode->val = v;
      newNode->next = headref;
      headref = newNode;
   }
} 

int main(){

  Node *head = NULL;

  appendnode(head,1);
  appendnode(head,2);

  while(head){
    cout << head->val << endl;
    head = head->next;
  }

/*
   int i=1;
   while(i <= 5){
      newNode = new Node();
      newNode->val = i;
      newNode->next = temp;
      head = newNode;
      temp = head;
      ++i;
   } */
   
 /*  Node* tmp1 = head;

   Node* rev = NULL;
   
   while(tmp1){
     Node *n = new Node();
     n->val */


   return 0;
}
  
  
     
 
