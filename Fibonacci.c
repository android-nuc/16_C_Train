/*斐波那契数*/
#include<stdio.h>

int fibonacci(int n)
{
	if(n == 1 || n == 2)
	{
		return 1;
	}
	else 
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main()
{
	int n, i;
	int f[100];
	f[0] = 1;
	f[1] = 1;
	for(i = 2; i < 20; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	for(i = 0; i < 20; i++)
	{
		printf("%d ", f[i]);
	}
	printf("\n");
	scanf("%d", &n);
	printf("用递归获取第%d个斐波那契数：%d\n", n, fibonacci(n));
	return 0;
}
