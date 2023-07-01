#include <stdio.h>

int binary_search(int arr[], int lb, int ub, int num)
{
    if (lb > ub)
        return -1;
    int mid = (lb + ub) / 2;
    if (arr[mid] == num)
        return mid;
    else if (num > arr[mid])
    {
        binary_search(arr, mid + 1, ub, num);
    }
    else if (num < arr[mid])
    {
        binary_search(arr, lb, mid - 1, num);
    }
}

int main()
{
    int n, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d space separated elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &num);
    int result = binary_search(arr, 0, n - 1, num);

    if (result == -1)
    {
        printf("Number %d is not in the array.\n", num);
    }
    else
    {
        printf("The number %d is in index %d", num, result);
    }
    return 0;
}