#include <stdio.h>

int binary_search(int arr[], int lb, int ub, int num)
{
    int mid;
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (arr[mid] == num)
        {
            break;
        }
        if (num > arr[mid])
        {
            lb = mid + 1;
        }
        else if (num < arr[mid])
        {
            ub = mid - 1;
        }
    }
    if (lb > ub)
    {
        return -1;
    }
    else
    {
        return mid;
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