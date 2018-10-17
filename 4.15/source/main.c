#include<stdio.h>
#include<stdlib.h>



int main(void)
{
	int i;
	double r,r2,r3,money;
	printf("Investment $5000\n");
	for (r = 0.1; r <0.125; r = r + 0.005)
	{
		r2 = 1 + r;
		r3 = r2;
		for (i = 0; i < 14;i++)
		{
			r3 = r3* r2;
		}
		money = 5000*r3 ;
		printf("Money is $%.2lf ", money);
		printf("\n");
		r2 =0; r3 = 0; money = 0;
	}
	system("pause");
	return 0;
}