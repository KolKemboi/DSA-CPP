#include <iostream>
#include <queue>
#include <stack>

template <typename T>
void printOut(std::queue<T> Queue, std::stack<T> Stack);

int main(){
    std::stack<float> Stack;
    Stack.push(1);
    Stack.push(10);
    Stack.push(100);
    Stack.push(1000);
    Stack.push(10000);
    std::queue<float> Queue;
    Queue.push(1);
    Queue.push(2);
    Queue.push(3);
    Queue.push(4);

    printOut(Queue, Stack);
    return 0;
}

template <typename T>
void printOut(std::queue<T> Queue, std::stack<T> Stack){
    while(!Queue.empty()){
        while (!Stack.empty()){
        {
            std::cout << Stack.top() << std::endl;
            Stack.pop();
        }
        std::cout << Queue.front() << std::endl;
        Queue.pop();
        
    }
}
}