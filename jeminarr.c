#include<stdio.h>
int main()
{
    int i,marks[5],a;
    int n=5; 
	for( i=0;i<5;i++)
	{
		printf("marks[%d]=",i);
		scanf("%d",&marks[i]);
	}
    printf("original array\n");
    for( i=0;i<5;i++)
	{

		printf("%d ",marks[i]);
	}
    a=marks[0];
    for ( i = 0; i < 5; i++)
    {
        marks[i] = marks[i+1];
    }
    marks[n-1]=a;
    printf("\nchaged array\n");
    for( i=0;i<5;i++)
	{
		printf("%d ",marks[i]);
	}
}
