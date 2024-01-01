/** 
 * Write a program to implement stack using pointers in C++ 
**/

#include <iostream>
#include <stdlib.h>
using namespace std;

const int MAX = 10;
int stackSize = 0;

// createing a stack 
struct stack {
    int items[MAX];
    int top;
};
typedef struct stack st;

// create an empty stack
void createEmptyStack(st *s) {
    s->top = -1;
}

// check if stack is full
int isFull(st *s) {
    if(s->top == MAX -1) {
        return 1;
    } else {
        return 0;
    }
}

// check if stack is empty
int isEmpty(st *s) {
    if(s->top == -1) {
        return 1;
    } else {
        return 0;
    }
}

// add a new element to the stack
void push(st *s, int newitem) {
    if(isFull(s)) {
        cout <<"Stack is full";
    } else {
        s->top++;
        s->items[s->top] = newitem;
        cout<<"Item is pushed into stack"<<endl;
    }
    stackSize++;
}

// remove element from stack
void pop(st *s) {
    if(isEmpty(s)) {
        cout << "Stack is empty";
    } else {
       cout << "Item popped:" << s->items[s->top] <<endl;
       s->top--;
       cout<< endl;
    }
    stackSize--;
}

void printElements(st *s) {
    cout<< "Elements in stack:" <<endl;
    for(int i=0; i<stackSize; i++) {
        cout<< s->items[i] << "\t"; 
    }
    cout << endl;
}


int main() {
    st *s = (st *)malloc(sizeof(st));
    int total, number;

    createEmptyStack(s);
    cout << "Specify number of elements you want to push into stack"<<endl;
    cin>> total;
    
    for(int i=0; i< total; i++) {
        cin>>number;
        cout<< "\t";
        push(s, number);
    }
    
    for(int i=0; i< total; i++) {
        pop(s);
    }
    
}