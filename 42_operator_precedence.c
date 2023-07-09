#include <stdio.h>

int main()
{
    // When division operator is applied to two integers then only the integral part or quotient part is returned.

    printf("a%%b=%d", 12 % 5);
    // operator that operates upon two operands is called a binary operator
    // operator that operates upon one operands is called a unary operator

    /*
    operator precedence
    1. parenthesis -> ()
    2. multiplication, division, mudulus -> *, /, %
    3. addition, substraction -> +, -

    ==> If there are two operator of same priority in an expression, then they are executed left to right.
     */
    return 0;
}