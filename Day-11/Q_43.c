// Write a function to check prime number.

#include <stdio.h>
//Initialize the void prime function.
void prime(int n)
{
    int i, isPrime = 1;

    if (n <= 1)                                     
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)                             //Checking the factor of n if the factor found the prime value will be 0.
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime==1)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
}

int main()                         //Calling function.
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    prime(a);                         //function calling.

    return 0;
}