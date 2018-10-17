#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int a, b, c,t,ans[501];
	a = 0;
	b = 0;
	c = 0;
	t = 0;
	int loop = 501 ;
	for (a = 1; a <loop ; a++)
	{
		ans[a] = a;
		for (b = 1; b < loop; b++)
		{
			if (ans[b] != b)
			{
				for (c = 1; c < loop; c++)
				{
					if (a*a + b * b == c * c)
					{
						printf("%3d,%3d,%3d\t", a, b, c);
						t++;
					}
				}
			}
		}
	}
	printf("¦@%3d­Ó\n", t);
	system("pause");
	return 0;
}