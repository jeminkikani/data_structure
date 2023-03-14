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
    struct node *ptr;
    if (head == NULL)
    {
        printf("\nUndeflow..");
    }
    else
    {
        ptr = head;
        while (ptr->next != head)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);
    }
    printf("\n");
}
void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }

    while (ptr->next != head)
        ptr = ptr->next;
    ptr->next = temp;
    temp->next = head;
    return;
}

void deleteend()
{
    struct node *ptr = head;
    struct node *prev;
    if (head == NULL)
        printf("list is Empty..");
    else if (ptr->next == head)
    {
        head = NULL;
        free(head);
    }
    else
    {
        while (ptr->next != head)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = head;
        free(ptr);
    }
}
void insertmid(int val, int pos)
{
    struct node *ptr = head, *prev;
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

void deletmid(int pos)
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

void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
    }
    else
    {
        while (ptr->next != head)
            ptr = ptr->next;
        ptr->next = temp;
        temp->next = head;
        head = temp;
    }
}

void deletfirst()
{
    struct node *ptr = head;
    struct node *temp = head;
    struct node *prev;

    if (head == NULL)
        printf("Already Empty..");
    else if (ptr->next == head)
    {
        head = NULL;
        free(head);
    }
    else
    {
        while (ptr->next != head)
            ptr = ptr->next;
        ptr->next = temp->next;
        head = temp->next;
        free(temp);
    }
}
int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
    insertfirst(5);
    insertfirst(15);
    print();
    deletfirst();
    print();
    insertmid(12, 30);
    deletmid(30);
    print();
}