#include<stdio.h>

int main()
{
    char c,d;
    printf("enter a character;\n");
    scanf("%c\n", &c);
    printf("value of %c is:%d\n",c,c);
    d=c+32;
    printf("the value of %c in smaller case is %d\n" ,d,d);

    return 0;
}
