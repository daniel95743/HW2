#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, a,b,j;
	a = 4; b = 4;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (j >= a && j <= b)
				printf("*");
			else printf(" ");
		}
		if (i < 4)
		{
			a = a - 1;
			b = b + 1;
		}
		else
		{
			a = a + 1;
			b = b - 1;
		}
		printf("\n");
	}

	system("pause");
	return 0;
}