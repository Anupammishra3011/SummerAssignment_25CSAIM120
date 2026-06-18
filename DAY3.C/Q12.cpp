//  program to find LCM of two numbers

#include <stdio.h>
int main()
{
    int a, b, M;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        M = a;
    }
    else
    {
        M = b;
    }

    while (1)
    {
        if (M % a == 0 && M % b == 0)
        {
            printf("LCM of %d and %d is %d\n", a, b, M);
            break;
        }
        M++;
    }

    return 0;
}