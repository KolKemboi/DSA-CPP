#include <iostream>

class Node{
public:
    int Value;
    Node* next;

};

void printOut(Node* node);

int main(){
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* last = new Node();

    first->Value = 0;
    first->next = second;
    second->Value = 1;
    second->next = third;
    third->Value = 2;
    third->next = last;
    last->Value = 3;
    last->next = NULL;


    Node* Inserted_first = new Node();
    Node* Appended_last = new Node();

    printOut(first);

    Inserted_first->Value = -1;
    Inserted_first->next = first;
    Appended_last->Value = 4;
    last->next = Appended_last;
    Appended_last->next = NULL;

    std::cout << "-------------------" << std::endl;
    printOut(first);


}

void printOut(Node* node){
    while (node != NULL)
    {
        std::cout << node->Value << std::endl;
        node = node->next;
    }
    
}