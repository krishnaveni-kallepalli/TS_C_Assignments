#include<stdio.h>
void swap(int a,int b)
{
	a=a^b;
	b=a^b;
	c=a^b;
	printf("%d %d",a,b);
}
