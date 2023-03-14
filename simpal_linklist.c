// Simple linklist
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
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

    if (head == NULL)
    {
        head = temp;
        return;
    }

    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = temp;
    return;
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

void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        temp->next = NULL;
    }

    else
    {
        temp->next = ptr;
        head = temp;
    }
}

void deletefirst()
{
    struct node *ptr = head;

    if (head == NULL)
        printf("Already Empty..");

    else
    {
        head = ptr->next;
        free(ptr);
    }
}

void midinsert(int val, int pos)
{
    struct node *ptr = head;
    struct node *prev;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = temp;
    temp->next = ptr;
}

void middelet(int pos)
{
    struct node *ptr = head, *prev;
    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    free(ptr);
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    print();
    // deleteEnd();
    // deleteEnd();
    print();
    insertfirst(50);
    insertfirst(60);
    print();
    // deletefirst();
    // deletefirst();
    // print();
    midinsert(100,30);
    midinsert(300,20);
    midinsert(500,40);
    print();
    middelet(20);
}
