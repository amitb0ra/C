#include <stdio.h>

int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int num;
    printf("Enter number you want factorial of\n");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));

    return 0;
}
