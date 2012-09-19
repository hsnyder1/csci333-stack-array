#include "Stack.h"
#include <iostream>

Stack::Stack(int initialSize) {
  theStack = new int[initialSize];
  capacity = initialSize;
  top = 0;
}

Stack::~Stack() {
  delete[] theStack;
}

void Stack::push(int value) {
  //if theStack is full
  // create new stack twice as big
  // copy all elements to new stack
  // delete old stack
  // point old stack pointer to new stack
  if(top == capacity){
    newStack = new int[capacity*2];
    top = 0;
    for(int i = 0; i <= capacity; i++){
      int x = theStack[i];
      newStack[top] = x;
      top++;
    }
    delete[] theStack;
    capacity = capacity*2;
    theStack=newStack;
  }
  theStack[top] = value;
  top++;
}

int Stack::pop() {
  top--;
  return theStack[top];
}

int Stack::peek() {
  return theStack[top-1];
}

int Stack::cap() {
  return capacity;
}
int Stack::size() {
  return top;
}
