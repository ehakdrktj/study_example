#include <stdio.h>

void for1()
{
	int a = 100;

	for (; a > 0; a--)
	{ 
		printf("%d\n", a);
	}
}

void for2()
{
	int a = 0;

	printf("input a (0~99): ");
	scanf_s("%d", &a);

	for (int i = 1; a + i <= 100; i++)
	{
		printf("a  = %d		i = %d		a + i = %d\n", a, i, a+i);
	}
}

void while1()
{
	int a = 0;

	while (a++ < 10)
	{
		printf("%d\n", a);
		a = a + 1;
	}
	/*
	while (a++ < 10)
	{
		printf("%d\n", a);
	}
	*/

	/*
	while (a < 10)
	{
		printf("%d\n", ++a);
	}
	*/
}