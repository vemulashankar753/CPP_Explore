#include <iostream>

using namespace std;


struct BST{
    int k;
    BST* left;
    BST* right;
};

void insertNode(struct BST* headref, int v){
    //BST* tmp = *headref;
    BST* tmp = headref;

    BST* l = new BST();
    l->k = v;
    l->left = NULL;
    l->right = NULL;


    if(v < tmp->k){
        cout << "inserting element at left:" << v << endl;

        if(tmp->left == NULL){
            cout << "Left node is null: so creating a new node completely: " << endl;
            tmp->left = l;
            return;
        }else{
            insertNode(tmp->left, v);
        }

    }else{
        cout << "inserting element at right:" << v << endl;
        if(tmp->right  == NULL){
            cout << "Right node is null: so creating a new node completely: " << endl;
            tmp->right = l;
            return;
        }else{
            insertNode(tmp->right, v);
        }

    }

}

void printBST(struct BST** headref){
    BST* tmp = *headref;

    if(tmp != NULL){
        cout << "The value of node is: " << tmp->k << endl;
        printBST(&tmp->left);
        printBST(&tmp->right);
    }else{
        return;
    }
}

int main() {

    BST* head = new BST();
    head->k = 8;
    head->left = NULL;
    head->right = NULL;

    insertNode(head,3);
    insertNode(head,10);
    insertNode(head,1);
    insertNode(head,14);
    insertNode(head,6);
    insertNode(head,4);
    insertNode(head,7);
    insertNode(head,13);

    //insertNode(head,2);

    printBST(&head);


    std::cout << "Hello, World!" << std::endl;
    return 0;
}

