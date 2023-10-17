#include<stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int result = 1;
for(int i=0; i<5; i++)
{
result=result * arr[i];
}
printf("Multiplication Result : %d\n", result);
return 0;
}