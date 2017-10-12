#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int account;
	float balance, charges, credits, limit;

	printf("Enter account number (-1 to end): ");
	scanf_s("%d", &account);

	while (account != -1)
	{
		printf("Enter beginning balance: ");
		scanf_s("%f", &balance);
		printf("Enter total charges: ");
		scanf_s("%f", &charges);
		printf("Enter total credits: ");
		scanf_s("%f", &credits);
		printf("Enter credit limit: ");
		scanf_s("%f", &limit);


		if (balance + charges - credits >= limit)
		{
			printf("Account:      %d\n", account);
			printf("Credit limit: %.2f\n", limit);
			printf("Balance:      %.2f\n", balance + charges - credits);
			printf("Credit Limit Exceeded.\n\n");
		}

		printf("\nEnter account number (-1 to end): ");
		scanf_s("%d", &account);

	}

	system("pause");
	return 0;
}