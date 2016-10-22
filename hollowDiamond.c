/*ПеаФСтаЮ*/ 
#include<stdio.h>
int main()
{
	int n, i, j;
	while(scanf("%d", &n) == 1)
	{
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < 2 * n; j++)
			{
				if(j == n - i || j == n + i)
					printf("*");
				else 
					printf(" ");
			}
			printf("\n");
		}
		for(i = n; i >= 0; i--)
		{
			for(j = 0; j <= 2 * n; j++)
			{
				if(j == n - i || j == n + i)
					printf("*");
				else 
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
