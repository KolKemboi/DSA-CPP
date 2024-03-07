#include <iostream>
#include <queue>

void displayQueue(std::queue<int> Queue);


int main(){
    std::queue<int> Queue;
    Queue.push(1);
    Queue.push(2);
    Queue.push(3);
    displayQueue(Queue);
    std::cout << Queue.size() << std::endl;
    std::cout << Queue.front() << std::endl;
    std::cout << Queue.back() << std::endl;
}

void displayQueue(std::queue<int> Queue){
    while(!Queue.empty()){
        std::cout << Queue.front() << std::endl;
        Queue.pop();
    }
}
