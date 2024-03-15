//  Without Argument and without return type
#include <stdio.h>
void myname()
{
    printf(" Sezal");
}
int main()
{
    printf("My name is :");
    myname();
    return 0;
}

// With Argument with return value

int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    c = sum(a, b);
    printf("The sum is %d\n", c);
    return 0;
}

// Without Argument and with return value

int takenumber()
{
    int i;
    printf("Enter a number ");
    scanf("%d", &i);
    printf(" The number  is %d\n", i);
    return i;
}
int main()
{
    int c;
    c = takenumber();
    return 0;
}

// With Argument and Without return value

void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
int main()
{
    printstar(7);
    return 0;
}

int main()
{
    int a = 4, b = 34, c = sum(a, b);
    // printf("The sum is %d\n", c);
    // printstar(7);

    return 0;
}