//  program to find sum of digits of a number

#include<stdio.h>
int main()
{ int num,sum=0,r;
printf("Enter a number: ");
scanf("%d",&num);
while(num){
r=num%10;
num = num / 10 ;
sum=sum+r; 
}
printf("Sum of digits of number: %d",sum);
return 0;
}
