//
// Created by Sohail on 2024-09-18.
//

#ifndef MYSTACK_HPP
#define MYSTACK_HPP
#include <string>
constexpr int MAX_SIZE = 10;
class MyStack {
    private:
        int stackTop;
        int numStack[MAX_SIZE]{};

    public:
        MyStack();
        bool push(int num);
        void pop();
        int top() const;
        bool isEmpty() const;
        bool isFull() const;
        std::string print() const;

};
#endif //MYSTACK_HPP
