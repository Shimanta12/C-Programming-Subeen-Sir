#include <stdio.h>

int max(int arr[], int n);

int main()
{
    int arr[] = {34, 34, 123, 54, 645, 23, 12, 2};
    printf("Max number of the array is: %d\n", max(arr, 8));
    return 0;
}

int max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}