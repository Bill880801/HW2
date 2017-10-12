#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int a, b, c;

	printf("	第三邊不大於500的畢氏三角形:\n\n");
	for (c = 1; c <= 500; c++)
	{
		for (a = 1; a <= c; a++)
		{
			for (b = a + 1; b <= c; b++)
			{
				if (a * a + b * b == c * c)
				{
					printf("	%4d	%4d	%4d \n ", a, b, c);
				}
			}
		}
	}

	system("pause");
	return 0;
}