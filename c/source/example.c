#include <stdio.h>


/* 홀수 짝수 구분 프로그램 */
void example01()
{
	int a = 0;

	while (1)
	{
		printf("input number : ");
		scanf_s("%d", &a);

		if (a % 2 == 1)
		{
			printf("%d is odd number!\n", a);
			break;
		}
		else
		{
			printf("%d is even number!\n", a);
		}
	}
}

/* 구구단 1~9 */
void example02()
{
	for (int i = 1; i <= 9; i++)
		for (int j = 1; j <= 9; j++)
			printf("%f * %f = %f\n", (float)i, (float)j, (float)(i*j));
}

void example03()
{
	int a = 0;

	printf("input number : ");
	scanf_s("%d", &a);

	for (int i = 1; ; i++)
	{
		for(int j = 0; j < i; j++)
		{ 
			printf("*");
			a--;
			
			if (a <= 0)
			{
				printf("\n");
				return;
			}
		}
		printf("\n");
	}
}