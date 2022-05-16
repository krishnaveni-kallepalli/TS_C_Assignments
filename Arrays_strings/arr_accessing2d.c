#include <stdio.h>
#define ROW 2
#define COL 3
int main()
{
	int i,j;
	int a[ROW][COL]={10,20,30,40,50,60};//method-1
	int b[ROW][COL]={{100,200,300},{400,500,600}};//method2
	printf("%d\n",a[0][1]);//accessing zero row  first column=20
	printf("%d\n",a[1][0]);//accessing fist row zero column=40
	printf("%d\n",b[0][1]);
	printf("%d\n",b[1][0]);
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("a[%d][%d]=%p,value is=%d\n",i,j,&a[i][j],a[i][j]);
			printf("b[%d][%d]=%p,value is=%d\n",i,j,&b[i][j],a[i][j]);
		}
		printf("base address of the array= %p,address of first element is %p\n",a,&a[0][0]);
	}
}
