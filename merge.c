// Merge Sort
#include <stdio.h>
#include <stdlib.h>
void MergeSearch(int a[], int l, int mid, int h)
{
    int b[50], i, j, k;
    i = l, k = l, j = mid + 1;

    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while (i <= mid)
        b[k++] = a[i++];
    while (j <= h)
        b[k++] = a[j++];
    for (i = l; i <= h; i++)
        a[i] = b[i];
}
void MergeSort(int a[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        MergeSort(a, l, mid);
        MergeSort(a, mid + 1, h);
        MergeSearch(a, l, mid, h);
    }
}
void main()
{
    int a[20], n = 15, i;
    for (i = 0; i < n; i++)
        a[i] = rand() % 99 + 1;

    printf("Before sorting Array :-\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    MergeSort(a, 0, n - 1);
    printf("\nAfter sorting Array :-\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}