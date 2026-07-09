#include <stdio.h>

int isPerfect(int n)
{
    int sum = 0, i;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    return (sum == n);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPerfect(num))
        printf("%d is a Perfect Number", num);
    else
        printf("%d is Not a Perfect Number", num);

    return 0;
}