//print any number from 1 to .... using while loop

#include<stdio.h>
int main()
{
int n;
printf("Enter The Number : ");
scanf("%d",&n);
int i=1;
while(i<=n)
{
printf("%d\n",i);
i++;
}
return 0;
}