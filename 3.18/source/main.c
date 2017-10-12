#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float dollars, salary;

	printf("Enter sales in dollars (-1 to end): ");
	scanf_s("%f", &dollars);
	salary = 200 + dollars * 0.09;

	while (dollars != -1)
	{
		printf("Salary is: $%.2f\n", salary);
		printf("\nEnter sales in dollars (-1 to end): ");
		scanf_s("%f", &dollars);
		salary = 200 + dollars * 0.09;
	}

	system("pause");
	return 0;

}