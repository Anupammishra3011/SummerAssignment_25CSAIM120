//Question 1- Program to find sum of first n natural numbers
// Answer-
#include <stdio.h>

int main() {
    int i,n, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for( i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d", sum);

    return 0;
}