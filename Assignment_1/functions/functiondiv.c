#include <stdio.h>

void function1(void);		// Function declaration

int main()
{
	function1();		// Function call
	function1();
	function1();
}

void function1(void)		// Function definition
{
	int a =50;
	int b =10;
	
	printf("->%d\n", a/b);
}