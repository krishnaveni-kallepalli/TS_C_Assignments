#include<stdio.h>
#include<stdlib.h>

void insert(char arr[100])
{
	char ch;
	int pos,i,N;
	printf("Enter position to insert:\n");
	scanf("%d",&pos);
	printf("Enter character  at %d position\n",pos);
	scanf(" %c",&ch);
	if(pos<= 0 || pos>=N+1)
	{
		printf("\nCannot insert\n");
		exit(0);
	}
	else
	{
		for(i=N-1;i>=pos-1;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[pos-1]=ch;
		N++;
		printf("The array is:\n");
		for(i=0;i<N;i++)
		{
			printf("%c ",arr[i]);
		}
	}
}
void delete()
{
	int pos;
	printf("Enter position to delete:\n");
	scanf("%d",&pos);
}
int main()
{
	char arr[100];
	int op;
	int i,N;
	printf("Enter no of elements in an array:\n");
	scanf("%d",&N);
	printf("Enter array elements:\n");
	for(i=0;i<N;i++)
	{
		scanf(" %c",&arr[i]);
	}
	for(i=0;i<N;i++)
	{
		printf("%c",arr[i]);
	}
	while(1)
	{
		printf("\nEnter Choice\n1)Insert 2)delete 3)exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:insert(arr);
				break;
			case 2:delete();
				break;
			default:exit(0);
				break;
		}
	}
}

