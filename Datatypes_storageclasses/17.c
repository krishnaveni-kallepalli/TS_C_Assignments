#include <stdio.h>

int main()
{
int rows,i,j;
printf("Enter no.of rows:\n");
scanf("%d",&rows);

for(i=1;i<=rows-1;i++)
{
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
}

for(i=rows;i>=1;i--)
{
	for(j=1;j<=i;j++)
        {
        	printf("%d ",j);
        }
        printf("\n");
}
return 0;
}
