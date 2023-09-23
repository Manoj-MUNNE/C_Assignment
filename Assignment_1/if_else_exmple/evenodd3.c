#include<stdio.h>
int main()
{
int n;
printf("Enter a Number : ");
scanf("%d",&n);
if(n%2==0)
{
printf("This is Even Number");
}
if(n%2!=0)
{
printf("This is a Odd Number");
}
return 0;
}