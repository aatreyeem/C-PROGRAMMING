#include<stdio.h>
#define max_size 100


int main()
{
    int num[max_size];
    int i,n;
    printf("Enter the size of array:\n");
    scanf("%d" ,&n);
    for (int i = 0; i < n; i++)
    {
       printf("Enter the numbers in array:\n");
       scanf("%d",&num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Element at position %d is %d.\n" ,i,num[i]);
    }
    

    return 0;
}
