// return with parameter

#include<stdio.h>
float function3(int a, int b);  //function declaration
void main()
{
float res=0;
res = function3(30,40);
printf("data-->%f\n",res);
res = function3(10,20);
printf("data-->%f\n",res);
} 
float function3(int a,int b)  //function definition
{
float result = 0;
result = 0;
result = a+b;
return result;
}