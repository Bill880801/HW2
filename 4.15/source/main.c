#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{	
	double amount;
	double principal = 5000;
	double rate ;
	unsigned int year;

	printf("%4s%10s%21s\n","Year","rate","Amount on deposit");
	
	for (rate = 0.1; rate <= 0.12; rate += 0.005)
	{
		for (year = 1; year <= 15; year++)
		{
			amount = principal * pow(1.0 + rate, year);
			printf("%4u%10.3f%21.2f\n", year, rate, amount);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}