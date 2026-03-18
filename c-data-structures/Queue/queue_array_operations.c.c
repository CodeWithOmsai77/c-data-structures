//Write a C program to insert and delete an element from a queue using an array.
 //(Include overflow and underflow checks.)

#include <stdio.h>
#define MAX 100
int queue[MAX];
int front = 0, rear = -1;
void enqueue(int x) {
    if (rear == MAX - 1) { 
        printf("queue overflow\n");
        return;
    }
    queue[++rear] = x;
    printf("%d inserted\n", x);
}
int dequeue() {
    if (front > rear) {
        printf("queue underflow\n");
        return -1;
    }
    return queue[front++];
}
int main() {
    enqueue(99);
    enqueue(54);    
    enqueue(87);
    printf("%d Deleted\n", dequeue());
    printf("%d Deleted\n", dequeue());
    printf("%d Deleted\n", dequeue());
    return 0;
}