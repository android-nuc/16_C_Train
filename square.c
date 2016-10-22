/*输出正方形*/
#include<stdio.h>
int main()
{
	int i, j, n;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				printf("*");	
			}	
			printf("\n");
		} 
	}
	return 0;
} 
