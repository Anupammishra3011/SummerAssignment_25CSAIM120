//  program to print armstrong numbers in a range

#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, num, temp, res, digits, sum;

    printf("Enter the First number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    for (num = n1; num <= n2; num++)
    {
        temp = num;
        digits = 0;
        sum = 0;
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
            printf("%d ", num);
    }

    return 0;
}