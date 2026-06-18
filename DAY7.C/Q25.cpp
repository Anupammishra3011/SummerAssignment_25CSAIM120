// program to recursive factorial

#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int n, result;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    result = fact(n);

    printf("Factorial = %d\n", result);

    return 0;
}