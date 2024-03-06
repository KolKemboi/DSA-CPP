#include <iostream>
#include <stack>

int main(){
    std::stack<int> Stack;
    Stack.push(0);
    Stack.push(1);
    Stack.push(2);
    Stack.push(3);
    Stack.pop();

    std::cout << Stack.top() << std::endl;
    std::cout << Stack.empty() << std::endl;
    std::cout << Stack.size() << std::endl;
}