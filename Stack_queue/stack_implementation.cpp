#include <iostream>
#include <vector>

class MyStack {
private:
    std::vector<int> data; 

public:
    MyStack() {
    }
    
    void push(int x) {
        data.push_back(x); 
    }
    
    int pop() {
        if (!data.empty()) {
            int topElement = data.back(); 
            data.pop_back(); 
            return topElement; 
        } else {
            throw std::out_of_range("Stack is empty");
        }
    }
    
    int top() {
        if (!data.empty()) {
            return data.back(); 
        } else {
            throw std::out_of_range("Stack is empty");
        }
    }
    
    bool empty() {
        return data.empty(); 
    }
};

int main() {
    MyStack stack;
    
    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.top() << std::endl; 
    std::cout << "Popped element: " << stack.pop() << std::endl; 
    std::cout << "Popped element: " << stack.pop() << std::endl; 
    std::cout << "Is stack empty? " << (stack.empty() ? "Yes" : "No") << std::endl; 
    std::cout << "Popped element: " << stack.pop() << std::endl; 
    std::cout << "Is stack empty? " << (stack.empty() ? "Yes" : "No") << std::endl; 
    return 0;
}
