//   Program to find the nth fibonacci term

#include <stdio.h>

int main()
{
    int num, n1 = 0, n2 = 1, n3, i;

    printf("Enter the value of n: ");
    scanf("%d", &num);

    if (num == 1)
        printf("Nth Fibonacci term = %d", n1);
    else if (num == 2)
        printf("Nth Fibonacci term = %d", n2);
    else
    {
        for (i = 3; i <= num; i++)
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        printf("Nth Fibonacci term = %d", n2);
    }

    return 0;
}