#include <stdio.h>

int main()
{
    int n, min, min_index;
    scanf("%d", &n);
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        min = 10000;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                min_index = j;
            }
        }
        arr2[i] = min;
        arr[min_index] = 10000;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}