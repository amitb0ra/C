#include <stdio.h>

/*
Print a Right-angled Triangle Pattern:

    *
   * *
  * * *
 * * * *

*/

int main()
{
    int height = 4;

    for (int i = 1; i <= height; i++)
    {
        printf("%*s", height - i, "");
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}