#include <iostream>
#include <stack>

void printStack(std::stack<int> Stack);

int main(){
    std::stack<int> Stack;
    Stack.push(0);
    Stack.push(1);
    Stack.push(2);
    Stack.push(3);
    Stack.pop();

    printStack(Stack);
    std::cout << Stack.top() << std::endl;
    std::cout << Stack.empty() << std::endl;
    std::cout << Stack.size() << std::endl;
}

void printStack(std::stack<int> Stack){
    while(!Stack.empty()){
        std::cout << Stack.top() << std::endl;
        Stack.pop();
    }
}