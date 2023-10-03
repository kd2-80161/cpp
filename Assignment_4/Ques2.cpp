/*
Q2. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using
Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not
given, allocate stack of size 5.
Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().
 */

#include <iostream>
class Stack
{
    int top;
    int len;

    void push();
    void pop();
    void peek();
    void isEmpty();
    void isFull();
    void print();

    Stack()
    {
        this->top = 0;
        this->len = 0;
    }
    void push()
    {
        
    }
};

int main()
{
    return 0;
}