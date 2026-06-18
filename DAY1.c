//Question 1 -Write a program to calculate the sum of first n natural numbers
//Answer-
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the number till you want the sum");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum=%d",sum);
    return 0;
}