// Infinite loop

#include<stdio.h>
void main()
{
int i=0;
printf("Value -> %d",i);
for(i=0; i<=5; i--)
{
printf("Value -> %d",i);
}
printf("After break value ->%d",i);
}