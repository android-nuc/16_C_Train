/*×ÔÔö×Ô¼õ*/ 
#include <stdio.h>
int main()
{
    int a=10, a1=++a;
    int b=20, b1=b++;
    int c=30, c1=--c;
    int d=40, d1=d--;

    printf("a=%d, a1=%d\n", a, a1);
    printf("b=%d, b1=%d\n", b, b1);
    printf("c=%d, c1=%d\n", c, c1);
    printf("d=%d, d1=%d\n", d, d1);

    return 0;
}

/*
	int a=12;
    int b=1;
    
    int c=a-(b--); 
    int d=(++a)-(--b); 
    
    printf("c=%d, d=%d\n", c, d);

*/
