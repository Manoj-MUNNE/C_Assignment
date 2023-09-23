#include<stdio.h>
int main()
{
int n;
printf("Enter a Number :");
scanf("%d",&n);
if(n%5==0)
{
printf("Given Number is Divisible by 5 ");
}
else
{
printf("Given Number is not Divisible by 5 ");
}
return 0;
}