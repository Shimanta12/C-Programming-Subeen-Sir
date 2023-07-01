#include <stdio.h>

int main()
{
    int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}; // 25

    int n;
    printf("Enter a number(1 to 99): ");
    scanf("%d", &n);
    int nums_of_prime[98] = {0};
    for (int i = n; i >= 1; i--)
    {
        int x = i;
        for (int j = 0; j < 25; j++)
        {
            if (prime[j] > x)
                break;
            while (x % prime[j] == 0)
            {
                nums_of_prime[prime[j]]++;
                x /= prime[j];
            }
        }
    }
    for (int i = 0; i < 98; i++)
    {
        if (nums_of_prime[i] > 0)
        {
            printf("(%d, %d) ", i, nums_of_prime[i]);
        }
    }
    return 0;
}
