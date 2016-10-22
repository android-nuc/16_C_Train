/*Êä³öÈý½ÇÐÎ*/ 
#include<stdio.h>
int main()
{
	int n, i, j, k;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			for(j = i; j < n; j++)
			{
				printf(" ");
			}
			for(k = 0; k < 2 * i + 1; k++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
} 
