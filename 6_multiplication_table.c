#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int m = 0;
        printf("Mulitiplication table of %d:\n", i);
        for (int j = 1; j <= 10; j++)
        {
            m += i;
            printf("%d X %d = %d\n", i, j, m);
        }
        printf("\n\n");
    }
    return 0;
}