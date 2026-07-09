// program to write function to find factorial

#include <stdio.h>

int factorial(int n);

int main()
{
    int num, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("Factorial = %d", fact);

    return 0;
}

int factorial(int n)
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}