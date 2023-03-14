#include<stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};
int main()
{
    struct node x,y,z;
    x.data = 65;
    x.ch = 'A';
    x.ptr = NULL;
    printf("x data: %d\t char %c",x.data,x.ch);

    y.data = 66;
    y.ch = 'B';
    y.ptr = NULL;
    printf("\ny data: %d\t char %c",y.data,y.ch);

    x.ptr = &y;
    y.ptr = &x;
    printf("\nData of x using y\n Data: %d\t Char %c",y.ptr->data,y.ptr->ch);
    printf("\nData of y using X\n Data: %d\t Char %c",x.ptr->data,x.ptr->ch);
    
}
