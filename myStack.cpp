//
// Created by Sohail on 2024-09-18.
//
#include "myStack.hpp"

#include <stack>
using namespace std;
MyStack::MyStack() {
    stackTop = -1;
}

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

int MyStack::top() const {
    if(stackTop >= 0) {
        return numStack[stackTop];
    } else {return -1;}
}

bool MyStack::isEmpty() const{
    if(stackTop == -1)return true;

    return false;
}
bool MyStack::isFull() const{
    if(stackTop == 9)return true;

    return false;
}

string MyStack::print() const{
    if(isEmpty())
        return "Empty Stack";

    string str = "Numbers in stack (bottom to top): \n";
    for(int i=0; i < stackTop; i++) {
        str += to_string(numStack[i]) + "\n";
    }

    return str;
}


// //
// // Created by A00257049 on 2019-01-21.
// //
//
// #include "Circle.hpp"
//
// Circle::Circle() {
//     radius = 10;
// }
// Circle::Circle(int r) : radius(r) {
// }
//
// void Circle::set_radius(int new_radius){
//     radius = new_radius;
// }
//
// double Circle::area() {
//     return 3.14 * radius * radius;
// }