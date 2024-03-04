#include <stdio.h>
#define PI 3.14

int main()
{
    int a=3;
    const  float b=7.33;
    // PI= 4.5; cant do this since PI is const
    // b = 3.5; cant be done since b is const here
    // printf("%-14.4f hello", b); 
    printf("my backslash \\n %f", PI);
    return 0;
    }
