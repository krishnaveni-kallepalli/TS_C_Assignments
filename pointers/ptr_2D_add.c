#include<stdio.h>
#define n 5
int add(int (*a)[10],int (*b)[10])
{
	int c[10],i;
	for(i=0;i<n;i++)
	{
	c[i]=(*a)[i]+(*b)[i];
	}
	printf("sum of array elements are c[is]:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",c[i]);
	}
}
int main()
{
	int a[10],b[10],i;
	printf("Enter array elements of a[i]\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter array elements of b[i]\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	add(&a,&b);
	
}
