#include<stdio.h>


int main()
{
    int num, sum=0;
    num=10;
   
   
    for (int i = 0; i <=num; i++)
    {
      sum += i;
    }
     printf("The sum of first %d natural number is:%d\n", num,sum);
    return 0;
}
