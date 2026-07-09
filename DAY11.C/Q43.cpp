// program to write function to check prime

#include <stdio.h>

int Prime(int n);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (Prime(num))
        printf("%d is a Prime Number", num);
    else
        printf("%d is not a Prime Number", num);

    return 0;
}

int Prime(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}