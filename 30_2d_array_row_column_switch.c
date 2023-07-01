#include <stdio.h>

int main()
{
    int mattrix[5][5], mattrix_2[5][5];
    printf("Enter the values of 5 X 5 mattrix: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &mattrix[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mattrix_2[j][i] = mattrix[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", mattrix_2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*

6 4 7 8 9
3 7 1 9 9
8 6 4 2 7
2 4 2 5 9
4 1 6 7 3

 */