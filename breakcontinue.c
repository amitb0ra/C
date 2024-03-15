#include <stdio.h>

int main()
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age\n", i);
<<<<<<< Updated upstream
        scanf("%d\n", &age);
        if (age > 10)
        {
            break;
        }
=======
        scanf("%d", &age);
        //     if (age > 10)
        //     {
        //         break;
        //     }

        if (age > 10)
        {
            continue;
        }

        printf("we've not come across continue statement");
        printf("we've not come across continue statement");
        printf("we've not come across continue statement");
        printf("we've not come across continue statement");
        printf("we've not come across continue statement");
        printf("we've not come across continue statement");
        printf("we've not come across continue statement");
>>>>>>> Stashed changes
    }

    return 0;
}
