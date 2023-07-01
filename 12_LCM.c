#include <stdio.h>

int main()
{
    int a, b, max;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);

    if (a == 0)
        max = b;
    else if (b == 0)
        max = a;
    else
    {
        max = (a > b) ? a : b;
        while (1)
        {
            if (max % a == 0 && max % b == 0)
            {
                break;
            }
            max++;
        }
    }
    printf("LCM : %d", max);
    return 0;
}