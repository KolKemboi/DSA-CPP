#include <iostream>

class Node{
public:
    int Value;
    Node* next;
};

void printOut(Node* node);
void Insert(Node**head, int val);
void Append(Node**head, int val);
void InsertAfter(Node*previous,int val);

int main(){
    Node* first = new Node;
    Node* last = new Node;

    first->Value = 1;
    first->next = last;
    last->Value = 10;
    last->next = NULL;

    Append(&first, 100);
    Append(&first, 1000);
    InsertAfter(first, 1000000);

    printOut(first);

}
void printOut(Node* node){
    while (node != NULL)
    {
        std::cout << node->Value << std::endl;
        node = node->next;
    }
    
}

void Insert(Node** head, int val){
    Node* added = new Node();
    added->Value = val;
    added->next = *head;

    *head = added;
}

void Append(Node** head, int val){
    //prep a new node
    Node* newNode = new Node();
    newNode->Value = val;
    newNode->next = NULL;
    //check emptiness of Linked list
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    

    //find the Last node
    Node* last = *head;
    while (last->next != NULL)
    {
        last = last->next;
    }
    

    //Insert the new node as the last node  
    last->next = newNode; 
}

void InsertAfter(Node*previous, int val){
    if (previous == NULL){
        std::cout << "is null" << std::endl;
        return;
    }
    Node* newNode = new Node();
    newNode->Value = val;
    newNode->next = previous->next;
    previous->next = newNode;
}