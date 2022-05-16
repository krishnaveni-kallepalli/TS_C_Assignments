#include<stdio.h>

void LSB(int x)
{
	
	if(x&1==1)
		printf("LSB is set\n");
	else
		printf("LSB not set\n");
}
