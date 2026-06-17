// Question 3-Write a program to find the factorial of a number
// Answer-
#include <stdio.h>
int main() {
    int i,n;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial = %d", fact);

    return 0;
}