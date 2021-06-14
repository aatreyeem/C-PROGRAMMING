#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter the number from which you want to start:\n");
    scanf("%d" ,&m);
    printf("Enter the number till which you want to end:\n");
    scanf("%d" ,&n);
    printf("The even numbers are:\n");
    for (int i =m; i <= n; i++)
    {
      if (i%2==0)
      {
        printf("%d\n" ,i);
      }
      
    }
    
    return 0;
}
