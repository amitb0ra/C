#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[2][4] = {{3, 5, 6, 24}, {3, 5, 6, 7}};

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("enter the value of %d element of the array\n", i);
    //     scanf("%d", &marks[i]);
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("the value of %d, %d element of the array is %d\n", i,j, marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    // marks[0]=314;
    // marks[1]=324;
    // marks[2]=334;
    // marks[3]=343;
    // printf("marks of student 1 is %d", marks[0]);
    return 0;
}
