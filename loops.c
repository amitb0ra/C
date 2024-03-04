#include <stdio.h>

// do while

// int main()
// {
//     int num, index = 5;
//     printf("enter a number\n");
//     scanf("%d", &num);

//     do
//     {
//         printf("%d\n", index);
//         index = index + 1;
//     } while (index < num);

//     return 0;
// }

// while loop

// int main()
// {
//     int i;
//     printf("enter a number\n");
//     scanf("%d", &i);

//     while (i<54)
//     {
//         printf("%d\n", i);
//         i=i+1;
//     }
//     printf("hello bitches");

//     return 0;
// }

// for loop

int main()
{
    int i, j;
    char c = '*';
    for (i = 0, j = 0, c = '*'; i < 5; i++)
    {
        printf("%d %c %d\n", i, c, j);
    }
    printf("%%d\n");

    return 0;
}
