#include <stdio.h>
#include <string.h>

void concatenate(char str1[], char str2[], char str3[])
{
    int i, j;
    for (i = 0, j = 0; i < strlen(str1); i++, j++)
    {
        str3[j] = str1[i];
    }
    for (i = 0; i < strlen(str2); i++, j++)
    {
        str3[j] = str2[i];
    }
    str3[j] = '\0';
}

int main()
{
    char str1[51], str2[51], str3[101];
    printf("Enter the first string(Max-50 characters): ");
    gets(str1);
    printf("Enter the second string(Max-50 characters): ");
    gets(str2);
    concatenate(str1, str2, str3);
    printf("%s\n", str3);
    return 0;
}