#include<stdio.h>

int main()
{
    int num,digit;
    
    printf("\nenter any number");
    scanf("%d" ,&num);
    digit=num%10;
    printf("the digit at ones place of %d is %d",num,digit);
    return 0;
}
