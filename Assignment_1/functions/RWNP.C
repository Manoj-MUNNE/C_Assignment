//return with no parameter

#include<stdio.h>
float function3 (void);  //function declaration
int main()
{
 //float a;
//a = function3();   //function call
printf("print float data --> %f\n",function3());
}
float function3 (void)   //function definition
{
int a = 10, b = 20;
float result = 0.0;
result = a+b;
return result;
}