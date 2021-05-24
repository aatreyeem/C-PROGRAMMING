#include<stdio.h>
#include<math.h>
void time(int t,int hr,int min){
    hr=(t/60);
    min=(t%60);
    printf("equivalent hours is:%d" ,hr);
    printf("equivalent minutes is:%d" ,min);
    
}

int main()
{
   int t,hr,min;
   printf("enter the time in minutes:\n");
   scanf("%d" ,&t);
   time(t,hr,min);

    return 0;
}
