#include <stdio.h>

int main()
{
    int multiplication_table[10][10];

    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            multiplication_table[row][col] = (row + 1) * (col + 1);
        }
    }
    int even_nums = 0, odd_nums = 0, sum = 0;
    for (int row = 0; row < 10; row++)
    {
        printf("Multiplication table of %d\n", row + 1);
        for (int col = 0; col < 10; col++)
        {
            if (multiplication_table[row][col] % 2)
                odd_nums++;
            else
                even_nums++;
            sum += multiplication_table[row][col];
            printf("%d X %d = %d\n", row + 1, col + 1, multiplication_table[row][col]);
        }
        printf("\n\n");
    }
    printf("Total even numbers: %d\n", even_nums);
    printf("Total odd numbers: %d\n", odd_nums);
    printf("Sum of all numbers: %d\n", sum);
    return 0;
}