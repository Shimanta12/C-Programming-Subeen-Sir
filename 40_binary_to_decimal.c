#include <stdio.h>
#include <string.h>
#include <math.h>

int binary_to_decimal(char str[]);

int main()
{
    char str[100];
    scanf("%s", str);
    printf("Decimal of given binary number is: %d\n", binary_to_decimal(str));
    return 0;
}

int binary_to_decimal(char str[])
{
    int decimal = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        decimal += (str[i] - '0') * pow(2, length - i - 1);
    }
    return decimal;
}