#include <stdio.h>
#include <math.h>
#include <string.h>

void decimal_to_binary(int decimal, char binary[])
{
    int i = 0, digit;
    while (decimal != 0)
    {
        digit = decimal % 2;
        binary[i] = '0' + digit;
        i++;
        decimal /= 2;
    }
    binary[i] = '\0';
}

void decimal_to_binary_2(int decimal, char binary[])
{
    int n = -1;
    while (pow(2, n + 1) <= decimal)
    {
        n++;
    }
    int idx = 0;
    for (int i = n; i >= 0; i--)
    {
        if ((int)pow(2, i) <= decimal)
        {
            binary[idx] = '1';
            decimal -= (int)pow(2, i);
            idx++;
        }
        else
        {
            binary[idx] = '0';
            idx++;
        }
    }
    binary[idx] = '\0';
}

void str_reverse(char binary[])
{
    char temp;
    for (int i = 0, j = strlen(binary) - 1; i < j; i++, j--)
    {

        temp = binary[i];
        binary[i] = binary[j];
        binary[j] = temp;
    }
}

int main()
{
    int decimal;
    scanf("%d", &decimal);
    char binary[100];
    decimal_to_binary_2(decimal, binary);
    // str_reverse(binary);
    printf("Binary of given decimal is %s\n", binary);
    return 0;
}