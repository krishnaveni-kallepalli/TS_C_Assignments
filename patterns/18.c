#include <stdio.h>

int main()
{
int a,b;
int rows,i,j;
printf("Enter number of rows:");
scanf("%d",&rows);

printf("Enter a,b\n");
scanf("%d%d",&a,&b);
printf("Pattern result:\n");
for(i=1;i<=rows;i++)
{
        for(j=0;j<i;j++)
        {
            printf("%d ",a);
        }
	a+=2;
        printf("\n");
}


for(i=rows-1;i>=1;i--)
{
	for(j=0;j<i;j++)
        {
        	printf("%d ",b);
        }
	b-=2;
        printf("\n");
}
return 0;
}
