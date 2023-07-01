#include <stdio.h>

int main()
{
    int x, y, temp, gcd, lcm;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter another number: ");
    scanf("%d", &y);
    int a = x, b = y;
    if (a == 0)
        gcd = b;
    else if (b == 0)
        gcd = a;
    else
    {
        while (b != 0)
        {
            temp = b;
            b = a % b;
            a = temp;
        }
        gcd = a;
    }
    printf("GCD : %d\n", gcd);
    lcm = (x * y) / gcd;
    printf("LCM : %d\n", lcm);
    return 0;
}