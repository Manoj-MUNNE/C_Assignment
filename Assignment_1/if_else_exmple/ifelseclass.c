#include<stdio.h>
void main()
{
int a;
int b;
printf("Enter the value of a and b \n");
scanf("%d %d", &a, &b);
if(a==b)
{
a=a+b;
}
else
{
a++;
}
printf("Value of a after action -> %d",a);
}