#include<stdio.h>
#include<math.h>
float area(float a,float b,float c){
  float d,s;
   
    s=(a+b+c)/2;
    d=sqrt(s*(s-a)*(s-b)*(s-c));
    return d ;
    
}





int main()
{
  
  float a,b,c,d,s;
   printf("Enter the sides of trinagle:\n");
    scanf("%f %f %f\n" ,&a,&b,&c);
    
     printf("The area of triangle is:%f",area(a,b,c));
    return 0;
}

