//Write C functions enqueue() and dequeue() for a circular queue 
//implemented using an array. (Show how wrap-around works.)

#include<stdio.h>
#define MAX 5

int cq[5];
int front = -1;
int rear = -1;

void enqueue (int x) {
if ((rear + 1) % MAX == front) {
    printf("queue overflow\n");
    return;
}
if(front == -1) //first element
front = 0;

rear = (rear + 1) % MAX;
cq[rear] = x;
printf("%d inserted\n", x);
}

int dequeue() { //delete element
    if(front == -1) {
        printf("queue overflow\n");
    return -1;
    }
    int x = cq[front];
    if(front == rear)
    front = rear = -1;
    else 
    front = (front + 1) % MAX;
    return x;
}

int main() {

enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);

printf("Deleded: %d\n", dequeue());
printf("Deleted: %d\n",dequeue());

enqueue(50);
enqueue(60);
}