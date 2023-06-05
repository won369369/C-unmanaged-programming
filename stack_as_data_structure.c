#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int item) {
  if(top >= SIZE-1) {
    printf("\nStack is Full!!\n");
  } else {
    printf("\nInserted -> %d", item);
    stack[++top] = item;
  }
}

void pop() {
  if(top < 0) {
    printf("\nStack is Empty!!\n");
  } else {
    printf("\nRemoved -> %d", stack[top--]);
  }
}

void peek() {
  if(top < 0) {
    printf("Stack is Empty!!");
  } else {
    printf("\nTop element is -> %d", stack[top]);
  }
}

int main() {
  push(1);
  push(2);
  push(3);
  peek();
  pop();
  peek();

  return 0;
}
