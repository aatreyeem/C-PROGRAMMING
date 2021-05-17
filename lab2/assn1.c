#include<stdio.h>
#include<math.h>


int main()
{
    float p,q,r,s,d;
    printf("enter the values of p,q,r,s\n");
    scanf("%f %f %f %f" ,&p,&q,&r,&s);
    d=sqrt((q-p)*(q-p)+(s-r)*(s-r));
    printf("the distance between the two points is:%f\n" ,d);
    return 0;
}
