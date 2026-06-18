// Program to check Armstrong number

#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, res, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = num;
    while (temp != 0)
    {
        res = temp % 10;
        sum = sum + pow(res, digits);
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);

    return 0;
}
       