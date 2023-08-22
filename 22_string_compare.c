#include <stdio.h>
#include <string.h>

int string_compare(char str1[], char str2[])
{
    int i;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] < str2[i])
            return -1;
        else if (str1[i] > str2[i])
            return 1;
    }
    if (strlen(str1) == strlen(str2))
    {
        return 0;
    }
    else if (strlen(str1) < strlen(str2))
    {
        return -1;
    }
    else
        return 1;
}

int main()
{
    char str1[50], str2[50];
    printf("Enter the first word: ");
    scanf("%s", str1);
    printf("Enter the second word: ");
    scanf("%s", str2);
    if (string_compare(str1, str2) == -1)
    {
        printf("First string is smaller.\n");
    }
    else if (string_compare(str1, str2) == 1)
    {
        printf("Second string is smaller.\n");
    }
    else
    {
        printf("Both string is same.\n");
    }
    return 0;
}