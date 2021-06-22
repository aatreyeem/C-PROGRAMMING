#include <stdio.h>
#define _max 100
#include<stdlib.h>

int main()
{
    int n, value;
    int arr[_max];

    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter the elements of array:\n");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);

    }
    

    printf("Enter the value of element you wish to enter:\n");
    scanf("%d", &value);

    for (int i = 0; i < n ; i++)
    {
        if (arr[i]>value)
        {
           for (int j = n-1; j >=i; j--)
           {
               arr[j+1]=arr[j];
               arr[j]=value;
               break;
           }
           
        }
        
    }
    for (int i = 0; i < n+1; i++)
    {
        printf("Elements of array at position %d is %d\n",i,arr[i]);
    }
    
    return 0;
}
