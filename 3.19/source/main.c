#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float interest, principal, rate, days;

	printf("Eneter loan principal (-1 to end): ");
	scanf_s("%f", &principal);

	while (principal != -1)
	{
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%f", &days);
		interest = principal * rate * days / 365;
		printf("The interest charge is $%.2f\n", interest);

		printf("\nEneter loan principal (-1 to end): ");
		scanf_s("%f", &principal);

	}
	

	system("pause");
	return 0;
}