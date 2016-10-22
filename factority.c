/*µÝ¹éÇó½×³Ë*/ 
#include<stdio.h>

int factority(int n)
{
	if(n == 1 || n == 0)
	{
		return 1;
	}
	else 
	{
		return n * factority(n - 1);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n",factority(n));
	return 0; 
} 
