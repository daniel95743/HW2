#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int account;
	float  balance, charges, credits, limit,totalbalance;
	account = 0;
	while (account!=-1)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &account);
		if (account == -1)
		{
			system("pause");
			return 0;
		}
		printf("Enter beginning balance:");
		scanf_s("%f", &balance);
		printf("Enter total charges:");
		scanf_s("%f", &charges);
		printf("Enter total credits:");
		scanf_s("%f", &credits);
		printf("Enter credit limit:");
		scanf_s("%f", &limit);
		totalbalance = balance + charges - credits;
			printf("Account:%d\n", account);
		printf("Credit limit:%f\n", limit);
		printf("Balance:%f\n", totalbalance);
		printf("Credit limit:%f\n", limit);
		if (totalbalance > limit)
			printf("Credit limit:Exceeded\n");
	}
	system("pause");
	return 0;
}