#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double salary,money;
	int type,time,piece;
	type = 0;
	while (1)
	{
		printf("Input the numder of manger(1) or hourly worker(2)\n or commission worker(3) pieceworker(4) and(5 to end)¡G");
		scanf_s("%d",&type);
		if (type == 5)
			break;
		switch (type)
		{
		case 1 :
			printf("Input how much the salery of one day¡G");
			scanf_s("%lf",&money);
			salary = 7* money;
			printf("The salery of a week $%.2lf", salary);
			break;
		case 2 :
			printf("Input how much the salery of one hour¡G");
			scanf_s("%lf", &money);
			printf("Input how much time you work (total hour)¡G");
			scanf_s("%d", &time);
			if (time > 40)
			{
				time=time - 40;
				salary = 40 * money + 1.5*time*money;
			}
			else
			{
				salary = time * money;
			}
			printf("The salery of a total hour $%.2lf",salary);
			break;
		case 3 :
			printf("Input your gross weekly sales : ");
			scanf_s("%lf", &money);
			salary = money * 0.057 + 250;
			printf("The salery of a week $%.2lf",salary );
			break;
		case 4 :
			printf("Input how many items you produce : ");
			scanf_s("%d", &piece);
			printf("Input how much money of one item : ");
			scanf_s("%f", &money);
			salary = money * piece;
			printf("Ths salary $%.2lf", salary);
			break;
		default:
			printf("Error\n");
			break;
		}
		printf("\n");
	}
	system("pause");
	return 0;
}