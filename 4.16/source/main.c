#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k;
	int a;
	a = 1;

	printf("(A)       \t(B)       \t(C)       \t(D)       \n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= a; j++)
		{
			printf("%s", "*");
		}
		for (k = 1; k <= (10 - a); k++)
		{
			printf("%s", " ");
		}

		printf("\t");
		//-----------------(1)

		for (j = 10; j >= a; j--)
		{
			printf("%s", "*");
		}
		for (k = 10; k > (11 - a); k--)
		{
			printf("%s", " ");
		}

		printf("\t");
		//------------------(2)
		for (j = 10; j>(11 - a); j--)
		{
			printf("%s", " ");
		}
		for (k = 10; k >= a; k--)
		{
			printf("%s", "*");
		}

		printf("\t");
		//--------------------------(3)

		for (j = 1; j <= (10 - a); j++)
		{
			printf("%s", " ");
		}
		for (k = 1; k <= a; k++)
		{
			printf("%s", "*");
		}
		//-------------------------------(4)
		
		a += 1;
		printf("\n");

	}

	system("pause");
	return 0;
}