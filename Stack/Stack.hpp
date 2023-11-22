//
//  Stack.hpp
//  Stack
//
//  Created by Macbook on 01/11/2023.
//

#ifndef Stack_hpp
#define Stack_hpp
#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int capacity;
    int *arr;

public:
    Stack(int);

    // void push(int);
    // void pop();
    // int peek();
    // bool isFull();
    // bool isEmpty();

    void printStack();
};

#endif /* Stack_hpp */
