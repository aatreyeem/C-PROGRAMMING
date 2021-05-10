#include<stdio.h>


int main()
{
    int a,b;
    printf("Enter any two numbers.\n");
    scanf("%d %d \n" ,&a,&b);
    printf("you have entered %d , %d as your chosen numbers.\n" , a, b);
    if (a>b)
    {
     printf("%dis the greater integer\n" ,a);
    }
   
    else {
        printf("%d is the greater integer\n",b);
    }

    
    
    
    return 0;
}
