#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, f;
	float b, c, d, e, g;

	printf("�п�J���u�N�X: ");
	scanf_s("%d",&a);

	while (a != -1)
	{
		switch (a)
		{
		case 1:
			printf("\n�g�z�H��\n\n�п�J�g�~:");
			scanf_s("%f", &b);
			printf("\n�g�z�H�����g�~��%.2f", b);
			printf("\n\n�п�J���u�N�X: ");
			scanf_s("%d", &a);
			break;

		case 2:
			printf("\n���~�u\n\n�п�J�C�g�u�@�ɼ�:");
			scanf_s("%f", &c);
			printf("\n�п�J�C�p�ɤu��:");
			scanf_s("%f", &d);

			if (c <= 40)
			{
				printf("\n���~�u���g�~��%.2f", c * d);
			}
			else
			{
				printf("\n���~�u���g�~��%.2f\n", 40 * d + (c - 40) * 1.5 * d);
			}
			printf("\n\n�п�J���u�N�X: ");
			scanf_s("%d", &a);
			break;

		case 3:
			printf("\n������u\n\n�п�J��g�P����B:");
			scanf_s("%f", &e);
			printf("\n������u���g�~��%.2f", 250 + 0.057 * e);
			printf("\n\n�п�J���u�N�X: ");
			scanf_s("%d", &a);
			break;

		case 4:
			printf("\n�s�u\n\n�п�J��g�ҥͲ������:");
			scanf_s("%d", &f);
			printf("\n�п�J�C�󪺹S��:");
			scanf_s("%f", &g);
			printf("\n�s�u���g�~��%.2f", f * g);
			printf("\n\n�п�J���u�N�X: ");
			scanf_s("%d", &a);
			break;

		default:
			printf("\n�Э��s��J���u�N�X:");
			printf("\n\n�п�J���u�N�X: ");
			scanf_s("%d", &a);
			break;
		}
	}

	system("pause");
	return 0;
}