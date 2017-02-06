#include <stdio.h>

void if1()
{
	int a = 1, b = 2, c = 3, d = 4;

	
	if (a == 1)
		printf("a == 1\n");
	//else
	//
	if (b == 2)
		printf("b == 2\n");
	//else
	//
	if (c == 3)
		printf("c == 3\n");
	//else
	//
	if (d == 4)
		printf("d == 4\n");
	//else
	//
}

void elseif()
{
	int a = 1, b = 2, c = 3, d = 4;

	if (a == 1)
	printf("a == 1\n");
	else if (b == 2)
	printf("b == 2\n");
	else if (c == 3)
	printf("c == 3\n");
	else if (d == 4)
	printf("d == 4\n");
	//else
	//
}

void switch1()
{
	int a = 1, b = 2, c = 3, d = 4;

	switch (b)
	{
		case 1: printf("b == 1\n");
			break;
		case 2: printf("b == 2\n");
			break;
		case 3: printf("b == 3\n");
			break;
		case 4: printf("b == 4\n");
			break;
		default: printf("a = ???\n");
	}

}