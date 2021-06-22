#include <stdio.h>
#define _max 100


int main()
{
    int n, pos;
    int arr[_max];

    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter the elements of array:\n");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);

    }

    printf("Enter the position of element you wish to delete:\n");
    scanf("%d",&pos);

    for (int i =0; i < n ; i++)
    {
       if (pos>=n)
       {
           printf("Element can't be deleted!");
       }
       else{
           arr[i]=arr[i+1];
       }
    }
    printf("Array after deletion of element is:\n");
    for (int i = 0; i < n-1; i++)
    {
      printf("Element at position %d is %d",i,arr[i]);
    }
    return 0;
}