#include<stdio.h>
#define max_size 100

 int main()
{
    int num[max_size];
    int i,n , temp=0;
    printf("Enter the size of array:\n");
    scanf("%d" ,&n);
    for (int i = 0; i < n; i++)
    {
       printf("Enter the numbers in array:\n");
       scanf("%d",&num[i]);
    } 
    
  for (int i = 0; i < n; i++)
  {
     if (num[i]<num[temp])
     {
       temp=i;
     }
     
  }
  
    printf("Minimum no. is present at location%d is %d", temp+1,num[temp]);
    return 0;
}
