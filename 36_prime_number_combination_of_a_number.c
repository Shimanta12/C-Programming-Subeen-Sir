#include <stdio.h>

/*
Problem Description:
In this problem we aim to determine the prime factors of a factorial number of a given number between 2 and 99. For a input number, the code calculates the prime factors and the count of each prime factor. Finally, we print the prime factors and their counts.

Approach:
We use a predefined array named prime that contains the prime numbers from 2 to 97. And another array  num_of_primes to store the count of each prime factor.

For each input number n, we iterate from n down to 2 and checks if the number is divisible by any prime number. If it is divisible, it updates the count of that prime factor in the num_of_primes array and continues dividing the number by the prime factor until it is no longer divisible.

Finally, the code loops through the num_of_primes array and prints the prime factors along with their counts if the count is greater than 0.
 */

int main()
{
    int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}; // 25

    int n, x, i, j;
    int num_of_primes[98];
    while (1)
    {
        printf("Enter a number(2 to 99) (Enter 0 to exit) : ");
        scanf("%d", &n);
        if (n == 0)
            break;
        for (i = 0; i < 98; i++)
            num_of_primes[i] = 0;
        for (i = n; i >= 2; i--)
        {
            x = i;
            for (j = 0; j < 25; j++)
            {
                if (x < prime[j])
                    break;

                while (x % prime[j] == 0)
                {
                    num_of_primes[prime[j]]++;
                    x /= prime[j];
                }
            }
        }
        for (i = 2; i < 98; i++)
        {
            if (num_of_primes[i] > 0)
            {
                printf("(%d, %d) ", i, num_of_primes[i]);
            }
        }
        printf("\n");
    }

    return 0;
}