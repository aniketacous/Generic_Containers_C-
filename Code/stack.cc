#include "stack.h"

Stack::Stack() {

  top = 0;
}

void Stack::clear() {

  top = 0;
}

bool Stack::isEmpty() { return !top; }
int Stack::size() { return top;}

void Stack::push(StackType d) {

  if (top == STACK_SIZE)
    throw ContainerFullException();

  data[top] = d;
  top++;

  // data[top++] = d; also works
}

StackType Stack::pop() {

  if (top == 0)
    throw ContainerEmptyException();

  top--;
  return data[top];

  // return data[--top]; also works
}

StackType Stack::peek() {

  if (top == 0)
    throw ContainerEmptyException();

  return data[top-1];
}

