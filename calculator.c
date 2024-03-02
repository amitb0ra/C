/*
TODO:
    Implement a basic calculator program

    1. Declare variables to store operands and result
    2. Get user input for operands
    3. Perform arithmetic operations (addition, subtraction, multiplication, division)
    4. Display the result

EXTRAS:
    5. Add control statements for handling different operations (if-else or switch-case)
    6. Test the program with various inputs and ensure correct calculations
    7. Handle edge cases (division by zero, invalid inputs) gracefully
    8. Add additional features if desired (ex: square root, power, etc.)
*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter number a\n");
    scanf("%d", &a);

    printf("Enter number b\n");
    scanf("%d", &b);

    printf("The sum is %d\n", a + b);
    printf("The subtraction is %d\n", a - b);
    printf("The mutiplication is %d\n", a * b);
    printf("The division is %d\n", a / b);
    6 return 0;
}