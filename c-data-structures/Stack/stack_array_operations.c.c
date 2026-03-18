//Write a C function to implement a stack using an array with push(), pop(), peek(), isEmpty() and isFull().

#include<stdio.h>
#define MAX 100

int stack[100];
int top = -1;

//push
void push(int x) {
  if (top == MAX == -1){
  printf("stack overflow\n");
  return;  
}
stack[++top] = x;
printf("%d pushed:/n", x);
}

//pop
int pop() {
    if (top == -1) {
    printf("underflow\n");
    return -1;
}
return stack[top --];
}

//peek
int peek() {
    if(top -- -1) {
    printf("stack is empty\n");
    return -1;
}
return stack[top];
}

//empty
int isEmpty() {
    return top == -1;
}

//full
int isfull() {
    return top == MAX - 1;
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("popped: %d\n", pop());
    printf("Top element: %d\n", peek());

    if(isEmpty())
    printf("Satck is empty");
    else
    printf("stack is not empty\n");
    return 0;

}