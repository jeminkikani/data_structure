#include<stdio.h>
#include<stdlib.h>
#define maxsize 100;
int a[100],n,temp=0;
int main(){  
    printf("\n size of array :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        a[i]=rand()%50;
        printf("\n %d",a[i]);   
    }      
    for (int i = 0; i <n-1; i++) {     
        for (int j = i+1; j < n; j++) {     
           if(a[i] < a[j]) {    
               temp = a[i];    
               a[i] = a[j];    
               a[j] = temp;    
           }     
        }     
    }    
    printf("\n");    
    printf("Elements of array sorted in ascending order: \n");    
    for (int i = 0; i <n; i++) { 
        printf("%d ", a[i]);  
    }    
    return 0;    
}     