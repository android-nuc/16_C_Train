/*Ñî»ÔÈý½Ç*/
#include<stdio.h>
int main()
{
	int yh[100][100];
	int i, j, index;
	while(scanf("%d", &index) != EOF)
	{
		for(i = 0; i < index; i++)
		{
			yh[i][0] = 1;
			yh[i][i] = 1;
		}
		for(i = 0; i < index; i++)
		{
			for(j = 0; j < index - i; j++)
			{
				printf(" ");
			}
			for(j = 0; j <= i; j++)
			{
				if(i == j)
				{
					printf("%d ", yh[i][i]);
				}
				else if(j == 0)
				{
					printf("%d ", yh[i][j]);
				}
				else 
				{
					yh[i][j] = yh[i - 1][j - 1] + yh[i - 1][j];		/*ºËÐÄ*/ 
					printf("%d ", yh[i][j]);
				}
			}
			printf("\n");
		}	
	}
	return 0;
}
