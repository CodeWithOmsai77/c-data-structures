//Write ADD and DETETE function in ‘C’ for Queue using array

#include <stdio.h>
#define MAX 5

int q[MAX], front = -1, rear = -1;

void enqueue(int x)
{
    if (rear == MAX - 1)
        printf("Overflow\n");
    else
    {
        if (front == -1) front = 0;
        q[++rear] = x;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
        printf("Underflow\n");
    else
        front++;
}

int main()
{
    int ch, x;
    while (1)
    {
        printf("\n1.Enqueue 2.Dequeue 3.Exit\n");
        scanf("%d", &ch);
        if (ch == 1)
        {
            scanf("%d", &x);
            enqueue(x);
        }
        else if (ch == 2)
            dequeue();
        else
            break;
    }
    return 0;
}
