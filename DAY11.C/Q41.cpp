// program to write function to find sum tof two numbers 

#include <stdio.h>

int sum(int a, int b);

int main()
{
    int n1, n2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    result = sum(n1, n2);

    printf("Sum = %d", result);

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}