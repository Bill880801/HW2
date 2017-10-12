#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, f;
	float b, c, d, e, g;

	printf("請輸入員工代碼: ");
	scanf_s("%d",&a);

	while (a != -1)
	{
		switch (a)
		{
		case 1:
			printf("\n經理人員\n\n請輸入週薪:");
			scanf_s("%f", &b);
			printf("\n經理人員的週薪為%.2f", b);
			printf("\n\n請輸入員工代碼: ");
			scanf_s("%d", &a);
			break;

		case 2:
			printf("\n時薪工\n\n請輸入每週工作時數:");
			scanf_s("%f", &c);
			printf("\n請輸入每小時工資:");
			scanf_s("%f", &d);

			if (c <= 40)
			{
				printf("\n時薪工的週薪為%.2f", c * d);
			}
			else
			{
				printf("\n時薪工的週薪為%.2f\n", 40 * d + (c - 40) * 1.5 * d);
			}
			printf("\n\n請輸入員工代碼: ");
			scanf_s("%d", &a);
			break;

		case 3:
			printf("\n抽佣金工\n\n請輸入當週銷售金額:");
			scanf_s("%f", &e);
			printf("\n抽佣金工的週薪為%.2f", 250 + 0.057 * e);
			printf("\n\n請輸入員工代碼: ");
			scanf_s("%d", &a);
			break;

		case 4:
			printf("\n零工\n\n請輸入當週所生產的件數:");
			scanf_s("%d", &f);
			printf("\n請輸入每件的酬勞:");
			scanf_s("%f", &g);
			printf("\n零工的週薪為%.2f", f * g);
			printf("\n\n請輸入員工代碼: ");
			scanf_s("%d", &a);
			break;

		default:
			printf("\n請重新輸入員工代碼:");
			printf("\n\n請輸入員工代碼: ");
			scanf_s("%d", &a);
			break;
		}
	}

	system("pause");
	return 0;
}