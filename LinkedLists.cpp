#include <iostream>

class Node{
public:
    int Value;
    Node* Next;

};


void printOut(Node* node);


int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* last = new Node();

    head->Value = 1;
    head->Next = second;
    second->Value = 10;
    second->Next = third;
    third->Value = 100;
    third->Next = last;
    last->Value = 1000;
    last->Next = NULL;

    printOut(head);


}


void printOut(Node* node){
    while (node != NULL){
        std::cout << node->Value << std::endl;
        node = node->Next;
    }
}