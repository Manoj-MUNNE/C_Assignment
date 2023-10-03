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
	int a =10;
	int b =20;
	
	printf("->%d\n", a*b);
}