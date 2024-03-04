#include <stdio.h>

/*
TODO:
    Implement a multiplication table generator program

    1. Declare variables for the base number and the range of the table
    2. Get user input for the base number and range
    3. Use loops to generate and display the multiplication table

EXTRAS:
    4. Test the program with various base numbers and ranges
    5. Add formatting for a clear and organized output
    6. Ensure the program handles edge cases (negative numbers, zero)
    7. Consider additional features such as displaying tables for multiple numbers
    8. Optimize the program for efficiency if necessary
*/

int main()
{
    int a, b, p;

    printf("enter the number\n");
    scanf("%d", &a);

    printf("Enter range of the table b\n");
    scanf("%d", &p);

    printf("the table is\n");

    for (b=0 ; b < p; b++)
    {
        printf("%d * %d = %d \n", a, b, a*b);;
    }

    return 0;
}
