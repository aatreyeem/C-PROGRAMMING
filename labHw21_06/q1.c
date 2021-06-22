#include <stdio.h>
#define _MAX 100
#include <stdlib.h>
int main()
{
    int pos, n, value;

    int arr[_MAX];

    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        printf("Element of array at position %d is %d\n", i, arr[i]);
    }

    printf("Enter the position you want to enter the element:\n");
    scanf("%d", &pos);
    getchar();
    printf("Enter the value element:\n");
    scanf("%d", &value);
    getchar();
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
        arr[pos] = value;
    }
    printf("Array after inserting element :\n");

    for (int i = 0; i < n + 1; i++)
    {
        printf("Element at position %d is %d\n", i, arr[i]);
    }

    return 0;
}
