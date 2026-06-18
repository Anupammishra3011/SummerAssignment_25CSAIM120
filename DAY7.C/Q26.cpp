//  program to recursive fibonacci

#include<stdio.h>
int fib(int n);
int main()
{
    int n,i;
    int res;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    printf("Fib series is:");
    for(i=0 ; i<n ; i++)

    {res=fib(i);
     printf("%d",res);
    }


}
int fib(int n )
{
    if (n==0)
    return 0;
    else if (n==1)
    return 1;
    else
        return(fib(n-1)+fib(n-2));


}