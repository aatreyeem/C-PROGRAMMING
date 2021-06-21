#include<stdio.h>
int squaresum(n){
int i,sum=0;

    for (int i = 0; i <=n; i++)
    {
       if ((i%2) != 0)
       {
           sum +=(i*i);
       }
       
    }
    printf("Sum of squares of first %d odd natural numbers is:%d",n,sum);
   return 0;
    }
int main()
{
   int a;
   printf("Enter a number");
   scanf("%d" ,&a);
   squaresum(a); 
    
    return 0;
}
