#include <stdio.h>

int main()
{
    double celsius, fahrenheight;
    printf("Enter the temperature in celsius: ");
    scanf("%lf", &celsius);
    fahrenheight = 1.8 * celsius + 32;
    printf("Temperature in fahrenheight is %lf\n", fahrenheight);
    return 0;
}