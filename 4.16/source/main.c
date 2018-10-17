#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i <10; i++)
	{
		for (j = 10; j >i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (i =0; i <10; i++)
	{
		for (j = 0; j <10; j++)
		{
			if (j<i)
			printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i <10; i++)
	{
		for (j = 10; j >0; j--)
		{
			if (j>i)
			printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}