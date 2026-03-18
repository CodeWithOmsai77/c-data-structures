//Write C functions push() and pop() for a stack implemented using a singly linked list.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

/* push operation */
void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
        printf("Stack Overflow\n");
    else
    {
        newnode->data = x;
        newnode->next = top;
        top = newnode;
    }
}

/* pop operation */
void pop()
{
    struct node *temp;

    if (top == NULL)
        printf("Stack Underflow\n");
    else
    {
        temp = top;
        printf("Popped element: %d\n", temp->data);
        top = top->next;
        free(temp);
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    pop();
    pop();

    return 0;
}
