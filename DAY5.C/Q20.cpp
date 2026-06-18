//  program to find largest prime factor

#include <stdio.h>
int main()
{int n, i, largestPrime = 0;
printf("Enter a number: ");
scanf("%d", &n);
for(i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            largestPrime = i;
            n = n / i;
        }
    }

    printf("Largest Prime Factor = %d", largestPrime);

    return 0;
}