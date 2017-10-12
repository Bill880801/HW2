#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a ;
	int b ;
	char c = ' ';
	char d = '+';

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 12; b++)
		{
			if ((a == 0) || (a == 2) || (b == 0) || (b == 11))
			{
				printf("%c",d);
			}
			else
			{
				printf("%c", c);
			}
		}
		printf("\n");
	}
	printf("\n");

	system("pause");
	return 0;
}