#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int length, breadth,i,j;
	printf("Please input length and breadth of pattern:");
	scanf_s("%d%d", &length, &breadth);
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < breadth; j++)
		{
			if (i == 0 || i == length-1)
				printf("+");
			else
			{
				if (j==0 || j==breadth-1)
					printf("+");
				else
					printf(" ");
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}