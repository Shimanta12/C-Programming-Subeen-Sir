#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a letter: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase letter.\n");
    }
    else
    {
        printf("Uppercase letter.\n");
    }
    return 0;
}