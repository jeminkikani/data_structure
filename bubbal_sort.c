#include <stdlib.h>
#include <stdio.h>
int a[30], count = 0, swapcount = 0;
void bubblesort(int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            count++;
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapcount++;
            }
            else
            {
            }
        }
    }

    printf("\n sorted array is :");
    for (int i = 0; i < n; i++)
        printf("\n%d\t%d", i, a[i]);
    printf("\n swapping possibility count :%d", count);
    printf("\n swapping count :%d", swapcount);
}
int main()
{
    int i, n;
    printf("How many elements are you going to enter ? :");
    scanf("%d", &n);
    printf("\n array elements:");

    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 99;
        printf("\n %d\t %d", i, a[i]);
    }
    bubblesort(n);
    return 0;
}