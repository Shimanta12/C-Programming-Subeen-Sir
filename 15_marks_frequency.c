#include <stdio.h>

int main()
{
    int total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
                         65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
                         62, 66, 76, 70, 67, 65, 77, 63};
    int marks_count[101] = {0};
    for (int i = 0; i < 40; i++)
    {
        marks_count[total_marks[i]]++;
    }
    for (int i = 0; i < 101; i++)
    {
        if (marks_count[i] > 0)
        {
            printf("%d Students got %d marks.\n", marks_count[i], i);
        }
    }
    return 0;
}