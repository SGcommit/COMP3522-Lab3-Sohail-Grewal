//
// Created by Sohail on 2024-09-18.
//
#include "myStack.hpp"

#include <stack>
using namespace std;
// Constructor: Initializes the stack by setting the stackTop to -1, indicating an empty stack.
MyStack::MyStack() {
    stackTop = -1;
}

// Push: Adds an element to the top of the stack if there's space. Returns true if successful, false otherwise.
bool MyStack::push(int num) {
    if(stackTop >= 9)
        return false;
    else
        numStack[++stackTop] = num;
    return true;
}
//doesn't need to be zeroed because value will be reassigned
void MyStack::pop() {
    if(stackTop > -1) {
        stackTop--;
    }

}

// Top: Returns the value of the top element without removing it. Returns -1 if the stack is empty.
int MyStack::top() const {
    if(stackTop >= 0) {
        return numStack[stackTop];
    } else {return -1;}
}
// IsEmpty: Checks if the stack is empty. Returns true if empty, false otherwise.
bool MyStack::isEmpty() const{
    if(stackTop == -1)return true;

    return false;
}
// IsFull: Checks if the stack is full. Returns true if full, false otherwise.
bool MyStack::isFull() const{
    if(stackTop == 9)return true;

    return false;
}
// Print: Returns a string representation of the stack, showing the elements from bottom to top.
string MyStack::print() const{
    if(isEmpty())
        return "Empty Stack";

    string str = "Numbers in stack (bottom to top): ";
    for(int i=0; i <= stackTop; i++) {
        str += to_string(numStack[i]) + " ";
    }

    return str;
}
