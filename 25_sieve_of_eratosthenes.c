#include <stdio.h>
#include <math.h>

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