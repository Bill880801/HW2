#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float hours, rate;

	printf("Enter # of hours worked (-1 to end): ");
	scanf_s("%f",&hours);

	while (hours != -1)
	{
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f",&rate);
		
		if (hours > 40)
		{
			printf("Salary is %.2f\n", 40 * rate + (hours - 40) * 1.5 * rate);
		}
		else
		{
			printf("Salary is %.2f\n", hours * rate);
		}

		printf("\nEnter # of hours worked (-1 to end): ");
		scanf_s("%f", &hours);
	}


	system("pause");
	return 0;
}