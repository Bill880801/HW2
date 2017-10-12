#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c;

	for (a = 0; a <=5; a++)
	{
		for (c = 0; c < (6 - a); c++)
		{
			printf(" ");
		}
		for (b = 0; b < a * 2 - 1; b++)
		{
			printf("*");
		}
	printf("\n");
	}

	for (a = 4; a >= 0; a--)
	{
		for (c = 0; c < (6 - a); c++)
		{
			printf(" ");
		}
		for (b = 0; b < a * 2 - 1; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}