/*ц╟ещеепР*/
#include<stdio.h>
int main()
{
	int i, j, t;
	int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	for(i = 0; i < 10; i++)
	{
		for(j = i + 1; j < 10; j++)
		{
			if(a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}
