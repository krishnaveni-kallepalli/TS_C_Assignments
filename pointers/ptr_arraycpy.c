#include<stdio.h>
#define n 5
int arrcpy(int (*a)[10])
{
	int i,b[10];
	for(i=0;i<n;i++)
	{
	b[i] = (*a)[i];
	}
	printf("array elements are b[i]:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
}
int main()
{
	int a[10],i;
	printf("Enter array elements of a[i]\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	arrcpy(&a);
}
