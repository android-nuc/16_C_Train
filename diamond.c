/* ‰≥ˆ¡‚–Œ*/ 
#include<stdio.h>
//int main()
//{
//	int n, i, j, k;
//	printf("input :");
//	while(scanf("%d", &n) != EOF)
//	{
//		n = n / 2;
//		for(i = 0; i < n; i++)
//		{
//			for(j = i; j < n; j++)
//			{
//				printf(" ");
//			}
//			for(k = 0; k < 2 * i + 1; k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for(i = n; i >= 0; i--)
//		{
//			for(j = i; j < n; j++)
//			{
//				printf(" ");
//			}
//			for(k = 0; k < i * 2 + 1; k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

int main()
{
	int n, i, j;
	while(scanf("%d", &n) == 1)
	{
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < 2 * n; j++)
			{
				if(j >= n - i && j <= n + i)
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
				if(j >= n - i && j <= n + i)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
}
	return 0;

}
