#include<stdio.h>

int main()
{
   int a,b,c;
   printf("enter a no.\n");
   scanf("%d\n" ,&a);
   b=a%100;
   c=b%10;
   printf("the digit at ones place of %d is %d\n", a,c);
    return 0;
}
