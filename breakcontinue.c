#include <stdio.h>

int main()
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age\n", i);
        scanf("%d\n", &age);
        if (age > 10)
        {
            break;
        }
    }

    return 0;
}