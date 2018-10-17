#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float  dollars,salary;
	dollars = 1 ;
	
	while (dollars !=-1)
	{
		printf("Enter sales in dollars (-1 to end)¡G");
			scanf_s("%f",&dollars);
			if (dollars == -1)
			{
				system("pause");
				return 0;
			}

			salary = (dollars * 0.09 )+ 200;
			printf("Salary is¡G%f",salary);
			printf("\n");
	}
	system("pause");
	return 0;


}
