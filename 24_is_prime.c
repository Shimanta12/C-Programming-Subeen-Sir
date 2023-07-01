#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    if (n < 2)
        return 0;
    else if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    int root = sqrt(n);
    for (int i = 3; i <= root; i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    while (1)
    {
        int n;
        printf("Enter a number (press 0 to exit()): ");
        scanf("%d", &n);
        if (n == 0)
            break;
        if (1 == is_prime(n))
        {
            printf("%d is a prime number.\n", n);
        }
        else
            printf("%d is not a prime number.\n", n);
    }
    return 0;
}