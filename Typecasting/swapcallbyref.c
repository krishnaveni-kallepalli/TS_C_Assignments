#include<stdio.h>
int swap(int *x,int *y);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("%d %d\n",a,b);
	
}
int swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return 0;
}
