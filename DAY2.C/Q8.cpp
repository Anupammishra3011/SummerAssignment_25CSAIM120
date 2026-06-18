// program to check whether a number is palindrome .

#include<stdio.h>
int main()
{
   int a,r,s=0,n;
   printf("Enter the value of a: ");
   scanf("%d",&a);
   n=a;
   while(n!=0)
   { 
    r=n%10;
    s=s*10 + r;
    n=n/10;
   }  
   printf("%d",s);
   if(a == s)
   {printf("palindrome");}
   else
   {printf("not palindrome");}
   return 0;

}

