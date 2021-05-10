#include <stdio.h>
int main()
{
    //check if a number is prime or not
    int i, n, prime;
    printf("Enter number");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0) // to  divide every number before n by itself
        {
            prime = 1;
        }
    }
    if (prime == 1)
    {
        printf("the number is not prime ");
    }
    else
    {
        printf("the number is prime");
    }
    return 0;
}