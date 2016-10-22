/*用指针将两数交换*/
#include<stdio.h>
void swap(int *a, int *b)
{	
	int t;
	t = *a;
	*a = *b;
	*b = t;
	
	//实质：根据交换指针指向的地址的值来实现值交换
}

int main()
{
	int a = 10, b = 20;
	swap(&a, &b);
	int d = 11;
	int *c = &d;
	printf("a = %d b = %d \n", a, b);	
	printf("c = %d\n", *c);
} 
