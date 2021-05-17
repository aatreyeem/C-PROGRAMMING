#include<stdio.h>

int main()
{
    float celsius,fahernheit;
    printf("enter the teemprature in farenheit\n");
    scanf("%f\n" ,&fahernheit);
    celsius=(fahernheit-32)*5/9;
    printf("the temprature in degree celsius is:%f\n" ,celsius);
    return 0;
}
