// No return and Parameter 

#include<stdio.h>
void function2 (int a, int b);  //function2 declaration
void function3 (int startCount, int stopCount);  // function3 declaration
int main()
{
int a = 05, b = 03;
function2 (20,30);   // function2 call
function3 (20,35);   // function3 call

}
void function2(int a, int b)  //function definition
{
int c = 10;
int d = 20;
printf("-->%d \n",a+b+c+d);
}
void function3(int startCount, int stopCount)
{
for (int a = startCount; a<=stopCount; a++)
{
printf("print values --> %d\n",a);
}
}

/*
C:\Users\manoj\Downloads>a.exe
-->80
print values --> 20
print values --> 21
print values --> 22
print values --> 23
print values --> 24
print values --> 25
print values --> 26
print values --> 27
print values --> 28
print values --> 29
print values --> 30
print values --> 31
print values --> 32
print values --> 33
print values --> 34
print values --> 35
*/