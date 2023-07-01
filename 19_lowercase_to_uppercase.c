#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a lowercase character: ");
    scanf("%c", &ch);
    printf("Given letter in uppercase: %c\n", 'A' + (ch - 'a'));
    return 0;
}