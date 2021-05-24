#include<stdio.h>
int avg(int a ,int b , int c ){
   
float d;
 d=(a+b+c)/3;
 return d ;
 
 }



int main()
{
  int a,b,c;
   float d;
printf("enter the nos.\n");
 scanf("%d %d %d\n",&a,&b,&c);
 d=avg(a,b,c);
  printf(" the average of three numbers is:%f" ,d);
    return 0;
}
