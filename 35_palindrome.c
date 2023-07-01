#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);
    int palindrome = 1;
    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            palindrome = 0;
        }
    }
    if (palindrome)
    {
        printf("The string is palindrome.\n");
    }
    else
    {
        printf("The string is not palindrome.\n");
    }
    return 0;
}