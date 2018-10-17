#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int time,time2;
	double money, salary, salary2;
	time = 0;
	while (time != 1)
	{
		printf("Enter # of hours worked (-1 to end)¡G");
		scanf_s("%d",&time);
		if (time == -1)
		{
			system("pause");
			return 0;
		}
		printf("Enter hourly rate of the worker ($00.00)¡G");
		scanf_s("%lf",&money );
		if (time <= 40)
		{
			salary = time * money;
			printf("Salary is $ %lf", salary);
		}
		else
		{
			salary = 40 * money;
			time2 = time - 40;
			salary2 = money * 1.5 *time2 + salary;
			printf("Salary is $ %.2lf", salary2);
		}
		
		printf("\n");
		
	}
	system("pause");
	return 0;  
}