#include <iostream>

using namespace std;

struct Node {
   int a;
   Node *next;
};

int main(){

   Node *main=NULL, *temp= NULL,*newNode=NULL;

   for(int i=0;i<5;i++){
      newNode = (Node*)malloc(sizeof(Node*));
      newNode->a = i;
      newNode->next = temp;
      main = newNode; 
      temp = main;
   }

   while(main){
    cout << main->a << endl;
    main = main->next;
   }

   free(main);
   free(newNode);

   return 0;
}
