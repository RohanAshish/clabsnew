#include <stdio.h>

int main()
{
    int number;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        isPrime = 0;
    }

    for (int i = 2; i <= number / i; i++)
    {
        if (number % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
    {
        printf("%d is prime\n", number);
    }
    else
    {
        printf("%d is not prime\n", number);
    }

    return 0;
}