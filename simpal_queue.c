#include <stdio.h>
#define size 5
int queue[5];
front = -1;
rear = -1, x;

void insert(int x)
{
    if (rear >= size - 1)
    {
        printf("\nqueue is overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
        printf("\n value inserted :%d", x);
    }
    else
    {
        printf("\n value insert :%d", x);
        queue[++rear] = x;
    }
}
void front_Delete()
{
    if (front == -1)
    {
        printf("\nUNDERFLOW\n");
    }
    else if (front == rear)
    {
        x = queue[front];
        front = rear = -1;
        printf("\n value delete :%d", x);
    }
    else
    {
        x = queue[front++];
        printf("\nvalue deleted :%d", x);
    }
}
void display()
{
    if (front == -1)
    {
        printf("\nEmpty queue\n");
    }
    else
    {
        printf("\nprinting values .....\n");
        for (int i = front; i <= rear; i++)
            printf("\t%d\t", queue[i]);
    }
}
int main()
{
    insert(11);
    insert(12);
    insert(13);
    insert(14);
    insert(15);
    insert(16);
    display();
    front_Delete();
    display();
    front_Delete();
    display();
    return 0;
}