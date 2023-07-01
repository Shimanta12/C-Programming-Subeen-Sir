#include <stdio.h>
#include <string.h>

int main()
{
    char saarc[7][100] = {"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};
    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", saarc[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < strlen(saarc[i]); j++)
        {
            printf("%c", saarc[i][j]);
        }
        printf("\n");
    }
    return 0;
}