#include <stdio.h>

int main()
{
    int grid[10][10] = {0};
    int n, x, y;
    printf("Enter the number of blocked cells: ");
    scanf("%d", &n);
    printf("Now enter the cells: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        grid[x][y] = -1;
    }
    char c;
    printf("Enter the initial coordinate: ");
    scanf("%d %d", &x, &y);
    printf("Enter command ('R'/'L'/'U'/'D') Or 'S' to stope:\n");
    while (1)
    {
        scanf("%c", &c);
        if (c == 'S')
            break;
        else if (c == 'R' && grid[x][y + 1] == 0 && y + 1 < 10)
        {
            y++;
        }
        else if (c == 'L' && grid[x][y - 1] == 0 && y - 1 >= 0)
        {
            y--;
        }
        else if (c == 'U' && grid[x - 1][y] == 0 && x - 1 >= 0)
        {
            x--;
        }
        else if (c == 'D' && grid[x + 1][y] == 0 && x + 1 < 10)
        {
            x++;
        }
    }
    printf("Final position of the robot is: %d %d", x, y);
}