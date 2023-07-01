#include <stdio.h>

void print_pattern(int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("C");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("C");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    print_pattern(n);
    return 0;
}