#include <stdio.h>
#include <math.h>

/*
Problem description:
What we've tried to do here is to determine whether a number is prime or not by
implementing the sieve of Eratosthenes. And we need to optimize the program in such a way that it is
both memory-efficient and time efficient.

Approach:
We are maintaining a character array instead of an integer array to store the status of a number(prime or not) within
the range of sqare_root(maximum_num one would check). If the number is less than or equal to the size
of the array then we are simply returning the status from the array. Otherwise if the number is greater than
sqare_root(maximum_num one would check), then we are checking the status of the number (prime or not) by checking if the number is divisible by all the prime numbers less than or equal to square_root(number) which we have already determined using the sieve function.
*/

void sieve(char arr[], int size)
{
    for (int i = 2; i <= size; i++)
    {
        arr[i] = '1';
    }
    for (int i = 2; i <= sqrt(size); i++)
    {
        for (int j = 2; i * j <= size; j++)
        {
            if (arr[i * j] == '1')
            {
                arr[i * j] = '0';
            }
        }
    }
}

char is_prime(char arr[], int size, int x)
{
    if (x <= size)
        return arr[x];
    else
    {
        for (int i = 2; i <= sqrt(x); i++)
        {
            if (arr[i] == '1')
            {
                if (x % i == 0)
                    return '0';
            }
        }
        return '1';
    }
}

int main()
{
    int n;
    printf("Enter the max value for checking prime: ");
    scanf("%d", &n);
    int size = sqrt(n);
    char arr[size];
    sieve(arr, size);
    while (1)
    {
        int x;
        printf("Enter the number(Enter 0 to exit.): ");
        scanf("%d", &x);
        if (x == 0)
            break;
        if (is_prime(arr, size, x) == '1')
        {
            printf("%d is a prime number.\n", x);
        }
        else
        {
            printf("%d is not a prime number.\n", x);
        }
    }
    return 0;
}
