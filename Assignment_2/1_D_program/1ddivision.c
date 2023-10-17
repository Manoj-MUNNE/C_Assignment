#include<stdio.h>
int main()
{
float arr[5]={1,2,3,4,5};
float result = 1;
for(int i=0; i<5; i++)
{
result=result/arr[i];
}
printf("%d",result);
return 0;
}