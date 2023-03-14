#include <stdio.h>
#include <stdlib.h>
#define n 15
int print(int a[])
{
    printf("\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
int QuickSort(int a[], int first, int last)
{
    int key, i, j;
    if (first < last)
    {
        print(a);
        key = first;
        i = first, j = last;
        while (i < j)
        {
            while (a[i] <= a[key] && i < last)
                i++;
            while (a[key] < a[j])
                j--;
            if (i < j)
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        int temp = a[key];
        a[key] = a[j];
        a[j] = temp;
        QuickSort(a, first, j - 1);
        QuickSort(a, j + 1, last);
    }
}
int main()
{
    int a[n];
    // int a[n] = {50,30,10,90,80,20,40,70};
    for (int i = 0; i < n; i++)
        a[i] = rand() % 99 + 1;
    printf("Before Sorting Array: ");
    print(a);

    QuickSort(a, 0, n - 1);
    printf("\nAfter Sorting Array: ");
    print(a);
}