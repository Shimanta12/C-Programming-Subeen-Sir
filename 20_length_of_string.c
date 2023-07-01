#include <stdio.h>

int length(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char str[30];

    while (NULL != gets(str))
    {

        printf("The length of the word is %d\n", length(str)); // ctrl + Z to terminate the program. Returns NULL
    }
    return 0;
}