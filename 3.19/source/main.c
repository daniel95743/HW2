#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double interest,principal;
	float rate;
	int day;
	principal = 0;
	while (principal != -1)
	{
		printf("Enter loan principal (-1 to end)¡G");
		scanf_s("%lf",&principal);
		if (principal == -1)
		{
			system("pause");
			return 0;
		}
		printf("Enter interest rate¡G");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days¡G");
		scanf_s("%d", &day);
		interest = principal * rate*day / 365;
		printf("The interest charge is $%lf",interest);
		printf("\n");

	}
	system("pause");
	return 0;
}