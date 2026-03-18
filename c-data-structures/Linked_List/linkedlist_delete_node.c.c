//C program to delete a given number from a singly linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

/* Insert at end (for testing) */
void insert(int x)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    struct node *temp = head;

    newnode->data = x;
    newnode->next = NULL;

    if(head == NULL)
        head = newnode;
    else {
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
}

/* Delete given number */
void delete(int key)
{
    struct node *temp = head, *prev = NULL;

    /* If first node contains key */
    if(temp != NULL && temp->data == key) {
        head = temp->next;
        free(temp);
        return;
    }

    /* Search key */
    while(temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL) {
        printf("Element not found\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

/* Display list */
void display()
{
    struct node *temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);

    delete(30);

    display();
    return 0;
}
