#include<stdio.h>
int main()
{
	int i, j, t, index;
	int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	for(i = 0; i < 10; i++)
	{
		index = i;
		for(j = i + 1; j < 10; j++)
		{
			if(a[i] > a[j])
			{
				index = j;
			}
		}
		if(index != i)
		{
			t = a[i];
			a[i] = a[index];
			a[index] = t;
		}
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
