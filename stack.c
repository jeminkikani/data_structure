// stack (LIFO) last in first out
#include <stdio.h>
#define n 5
int i;
int a[n];
int top = -1;
void push(int val)
{
    if (top >= n - 1)
    {
        printf("\nstack is overflow....");
    }
    else
    {
        a[top++] = val;
    }
}
void pop(int a[])
{
    if (top < 0)
    {
        printf("\nstack is underflow....");
    }
    else
    {
        top--;
    }
}
void front_insert(int val)
{
    if (top >= n - 1)
    {
        printf("\nstack is overflow....");
    }
    else if (top < 0)
    {
        top++;
        a[top] = val;
    }
    else
    {
        for (i = n - 1; i >= 0; i--)
        {

            a[i] = a[i - 1];
        }
        a[0] = val;
        top++;
    }
}
void mid_insert(int val)
{
    if (top >= n - 1)
    {
        printf("\nstack is overflow....");
    }
    else
    {
        for (i = n - 1; i >= (n / 2); i--)
        {

            a[i] = a[i - 1];
        }
        a[n / 2] = val;
        top++;
    }
}
void front_delete(int a[])
{
    if (top < 0)
    {
        printf("\nstack is underflow....");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        top--;
    }
}
void mid_delete(int a[])
{
    for (i = (n / 2); i < n; i++)
    {
        a[i] = a[i + 1];
    }
    top--;
}
void display()
{
    for (i = 0; i <= top; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
int main()
{
    int ch, a;
    printf("1. Insert push");
    printf("\n2. Insert at pop");
    printf("\n3. Insert at front_insert");
    printf("\n4. Delete at End");
    printf("\n5. Delete at mid");
    printf("\n6. Delete at first");
    printf("\n7. Display Array");

    do
    {
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d", &a);
            push(a);
            break;
        case 2:
            printf("Enter delet element: ");
            scanf("%d", &a);
            pop(a);
            break;
        case 3:
            printf("Enter frount_insert element: ");
            scanf("%d", &a);
            front_insert(a);
            break;
        case 4:
            printf("Enter mid_insert element: ");
            scanf("%d", &a);
            mid_insert(a);
            break;
        case 5:
            printf("Enter front_delete element: ");
            scanf("%d", &a);
            front_delete(a);
            break;
        case 6:
            printf("Enter mid_insert element: ");
            scanf("%d", &a);
            mid_delete(a);
            break;
        case 7:
            display();
            break;
        case 0:
            break;
        default:
            break;
        }

    } while (ch != 0);
}

    //     int a[n];
    //     // push(a,10);
    //     // push(a,20);
    //      front_insert(a,12);
    //      front_insert(a,13);
    //      front_insert(a,14);
    //      mid_insert(a,11);
    //      mid_insert(a,1);
    //      mid_delete(a);
    //      mid_delete(a);
    //      mid_delete(a);
    //     //  mid_insert(a,18);
    //     //  front_insert(a,15);
    //     //  front_delete(a);
    //     //  front_delete(a);
    //     //  front_delete(a);
    //     // push(a,30);
    //     // push(a,40);
    //     // push(a,50);
    //     // push(a,60); stack is overflow
    //     // pop(a);
    //     // pop(a);
    //     // pop(a); stack is underflow

    //     display(a);
//}