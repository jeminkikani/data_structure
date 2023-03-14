// Simple linklist
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
void print()
{
    struct node *ptr = head;
    if (head == NULL)
        printf("Underflow.....");

    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

void insertEnd(int val)
{
    struct node *ptr = head;    
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }

    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = temp;
    temp->prev = ptr;
    return;
}

void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->prev = temp;
        temp->next = head;
        head = temp;
    }
}
void deleteEnd()
{
    struct node *ptr;
    struct node *prev;
    if (head == NULL)
        printf("Already Empty....\n");
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
        free(ptr);
    }
}
int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    insertEnd(60);
    // insertEnd(70);
    insertfirst(100);
    insertfirst(200);
    insertfirst(300);
    print();
    deleteEnd();
    deleteEnd();
    print();
}