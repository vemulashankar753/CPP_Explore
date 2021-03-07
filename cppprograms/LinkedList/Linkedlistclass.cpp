#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

class Ll{
private:
    Node* head = NULL;
    Node* tail = NULL;
    Node** headref = NULL;
public:

    Ll(){
        cout << "constrctor is called" << endl;
    };

    void insAtBegin(int value){

        if(head == NULL){
            cout << "Head is null" << endl;
        }
        Node* tmp = new Node();
        tmp->value  = value;
        tmp->next = head;
        head = tmp;
    }

    void insertAtEnd(int value){
        Node* tmp1 = new Node();
        tmp1->value = value;
        tmp1->next = NULL;

        Node* tmp = head;

        while(tmp->next){
            tmp = tmp->next;
        }
        tmp->next = tmp1;
        tail = tmp1;
    }


    void printAll(){

        //Node** tmp = &head;
        Node* tmp = head;

        while(tmp){
            cout << "Node values are:" << tmp->value << endl;
            tmp = tmp->next;
        }


    }

    void reverseList(){
        Node* next = NULL;
        Node* prev = NULL;
        while(head){
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
       head = prev;
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;

    Ll lk;
    lk.insAtBegin(1);
    lk.insAtBegin(2);
    lk.insAtBegin(3);
    lk.insAtBegin(4);
    lk.insAtBegin(5);
    lk.printAll();
    lk.insertAtEnd(6);
    lk.printAll();
    lk.insAtBegin(7);
    cout << "============" << endl;

    lk.printAll();

    lk.reverseList();

    cout << "============" << endl;

    lk.printAll();





    return 0;
}

