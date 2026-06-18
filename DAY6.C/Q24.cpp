//  program to find X^n without pow()

#include <stdio.h>
int main()
{int x, n, i, result = 1;
printf("Enter the base (X): ");
scanf("%d", &x);
printf("Enter the exponent (n): ");
scanf("%d", &n);
for(i = 1; i <= n; i++)
    {
        result = result * x;
    }

    printf("%d^%d = %d", x, n, result);

    return 0;
}