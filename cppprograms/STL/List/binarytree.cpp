#include <iostream>

struct Node{
    int a;
    Node* left;
    Node* right;
};

void insertNode(Node* n,int e){

   if(n == NULL){
     n = (Node*)malloc(sizeof(Node*));
     n->a = e;
     n->left = NULL;
     n->right = NULL;
   } 

}

int main(){

  Node *main = NULL;
  insertNode(main,1);

  return 0;

} 
