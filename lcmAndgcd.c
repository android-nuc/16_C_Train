#include<stdio.h>
int lcm(int x, int y)	/*求最小公倍数**/ 
{
	int i, r;
	for(i = y; i <= x * y; i++)
	{
		if(i % x == 0 && i % y == 0)
		{
			r = i;
			break;
		}	
	} 
	return i;
}

int main()
{
	int i, j, t;
	scanf("%d%d",&i, &j);
	if(i > j)
	{
		t = i;
		i = j;
		j = t;
	}
	printf("lcm = %d\n",lcm(i, j));				/*最小公倍数*/
	printf("gcd = %d\n", i * j / lcm(i, j));	/*最大公约数*/ 
}
