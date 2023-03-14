#include<stdio.h>
int main()
{
    // int i=10;
    // printf("i:%d\t  i:%d\t i:%d\t i:%d\t",i++,++i,++i,i++);
       int a=1,b=2,c=3, d;
        d = a++ && b++ || c--;
        printf("a: %d\t b: %d\t c: %d\t d: %d",a,b,c,d);
        d = a++ && b++ && c--;
        printf("\na: %d\t b: %d\t c: %d\t d: %d",a,b,c,d);
        d = a++ || b++ && c--;
        printf("\na: %d\t b: %d\t c: %d\t d: %d",a,b,c,d);
}