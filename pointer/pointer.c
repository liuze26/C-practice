#include<stdio.h>
 void swap(int *x, int *y)
{
	int t;
	t = *x;
	*x= *y;
	*y=  t;
}
 int main(void)
{
	int a, b;
	a = 8;
	b = 4;
	swap(&a, &b);
	printf("%d,%d\n",a,b );
	return 0;
}