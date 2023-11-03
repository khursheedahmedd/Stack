//
//  Stack.cpp
//  Stack
//
//  Created by Macbook on 01/11/2023.
//

#include "Stack.hpp"


Stack::Stack(int cap) {
    top = -1;
    capacity = cap;
    arr = new int[capacity];
}

void Stack::push(int num) {
    if(!isFull()) {
        top++;
        arr[top] = num;
        cout<<"\n"<<num<<" is added successfully.";
    }
    else
        cout<<"\nThe stack is full.";
}

void Stack::pop() {
    if(isEmpty()) {
        cout<<"\nThe stack is empty.";
    }
    else {
        cout<<"\n"<<arr[top]<<" is removed...";
        top--;
        cout<<"\n Top element is removed succuessfully.";
    }
}

int Stack::peek() {
    if(isEmpty()) {
        cout<<"\nThe stack is empty.";
        return 0;
    }
    else {
        return arr[top];
    }
}

bool Stack::isEmpty() {
    if( top == -1) 
        return true;
    else
        return false;
}

bool Stack::isFull() {
    if(top == capacity - 1)
        return true;
    else
        return false;
}

void Stack::printStack() {
    if(isEmpty())
        cout<<"\nThe stack is empty.";
    else {
        int size = top + 1;
        for(int i=0; i<size; i++)
            cout<<arr[i]<<" ";
    }
}
