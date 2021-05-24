#include<stdio.h>
#include<math.h>
int total(int n ,int sum){
    sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    return sum;

}




int main()
{
 
 int n,sum;
 
 printf("Enter the no. till which you want the sum:\n");
 scanf("%d" ,&n);
 printf( "The sum is %d" , total(n,sum));
    return 0;
}
