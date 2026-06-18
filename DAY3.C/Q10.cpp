// program to print prime numbers in a range

#include <stdio.h>

int main()
{int n1, n2, i, j, isPrime;
printf("Enter the first  number: ");
scanf("%d", &n1);

printf("Enter the second  number: ");
scanf("%d", &n2);
printf("Prime numbers are:\n");
for (i = n1 ; i <= n2 ; i++)
    {if (i <= 1)
    continue; 
    isPrime = 1;
    for (j = 2; j <= i / 2; j++)
    {
    if (i % j == 0)
    {
    isPrime = 0;
    break;
    }
    }

    if (isPrime)
     printf("%d  ", i);
    }

    return 0;}