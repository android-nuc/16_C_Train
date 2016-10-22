/*猜数游戏*/ 
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand(time(NULL));
	int n, guess, result, times = 10;	/*设定猜数次数*/
	for(;;)
	{
		printf("\nstrat or not ? (1 / 0)\n");
		times = 10;
		scanf("%d", &n);
		if(n)
			result = rand() % 100 + 1;	/*生成1~100的随机数*/
		else 
			break;
		while(n)
		{
			
			printf("\nplease guess:");
			scanf("%d", &guess);
			if(guess > result)
				printf("Larger than the result!\n");	/*比结果大*/
			else if(guess < result)
				printf("Smaller than the result!\n");	/*比结果小*/ 
			else
			{
				printf("\n+------+\n");
				printf("|Bingo!|\n");
				printf("+------+\n");
				break;
			} 
			times--;
			if(!times)
			{
				printf("\n+-----------+\n");
				printf("|you failed!|\n");
				printf("+-----------+\n");
				break;
			}
			printf("%d chance left\n", times);	
		}
	}
	printf("Game is over!");
	return 0;
}
