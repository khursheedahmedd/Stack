//
//  main.cpp
//  Stack
//
//  Created by Macbook on 01/11/2023.
//

#include "Stack.hpp"

int main() {
    
    int cap;
    cout<<"\nEnter the capacity of the stack: ";
    cin>>cap;
    
    Stack *stack1 = new Stack(cap);
    
    int choice;
    
    char ch = 'y';
    
    do {
        cout<<"\n******* STACK *******";
        cout<<"\n*  1. Push          *";
        cout<<"\n*  2. Pop           *";
        cout<<"\n*  3. Peek          *";
        cout<<"\n*  4. Check Full    *";
        cout<<"\n*  5. Check Empty   *";
        cout<<"\n*  6. Print Stack   *";
        cout<<"\n*  7. Exit          *";
        cout<<"\n*********************";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        
        switch(choice) {
            case 1: {
                cout<<"\nPushing an element.....";
                
                int num;
                cout<<"\nEnter a number to push: ";
                cin>>num;
                
                stack1->push(num);
                
                break;
            }
            case 2: {
                cout<<"\nPoping an element....";
                
                stack1->pop();
                
                break;
            }
            case 3: {
                cout<<"\nFetching top element.....";
                
                cout<<"\nThe number is "<<stack1->peek();
                
                break;
            }
            case 4: {
                cout<<"\nChecking for full.....";
                
                if(stack1->isFull())
                    cout<<"\nThe stack is full.";
                else
                    cout<<"\nThe stack is not full.";
                
                break;
            }
            case 5: {
                cout<<"\nChecking for empty....";
                
                if(stack1->isEmpty())
                    cout<<"\nThe stack is empty.";
                else
                    cout<<"\nThe stack is not empty.";
                
                break;
            }
            case 6: {
                cout<<"\nPrinting whole stack.....\n";
                
                stack1->printStack();
                
                break;
            }
            case 7: {
                return 0;
            }
            default:
                cout<<"\nInvalid choice.";
        }
        cout<<"\nDo you want to repeat? Press Y: ";
        cin>>ch;
        
    }while(ch == 'y' || ch == 'Y');
    
    return 0;
}
