#include <stdio.h>

int main()
{
    int a, b, x, gcd;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    if (a == 0)
        gcd = b;
    else if (b == 0)
        gcd = a;
    else
    {

        if (a < b)
            x = a;
        else
            x = b;
        while (x >= 1)
        {
            if (a % x == 0 && b % x == 0)
            {
                gcd = x;
                break;
            }
            x--;
        }
    }
    printf("GCD : %d\n", gcd);
    return 0;
}