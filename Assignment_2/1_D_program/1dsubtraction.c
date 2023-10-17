#include<stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int result = 0;
for(int i=0; i<5; i++)
{
result=result-arr[i];
}
printf("%d",result);
return 0;
}