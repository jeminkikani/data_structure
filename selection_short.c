#include<stdio.h>
#include <stdlib.h>
#define n 9
int main()
{
    int a[n],i,j,t;
    for(i=0;i<n;i++)
        a[i]=rand() % 99 + 1;
    
    printf("\n Before Array Sorting");
    for(i=0;i<n;i++)
        printf("  %d",a[i]);
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {   
            if(a[i]>a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
 printf("\n After Sorting:");
    for(i=0;i<n;i++)
    {
        printf("  %d",a[i]);
    }
}