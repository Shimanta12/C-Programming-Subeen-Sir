#include <stdio.h>
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
    decimal_to_binary(decimal, binary);
    str_reverse(binary);
    printf("Binary of given decimal is %s", binary);
    return 0;
}