#include<stdio.h>
int main()
{
int y;
printf("Enter a year \n");
scanf("%d",&y);
if(y%4==0)
{
printf("This is a leap year");
}
else
{
printf("This is a not leap year");

}
return 0;
}