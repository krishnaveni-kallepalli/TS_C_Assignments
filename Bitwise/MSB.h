#include<stdio.h>

void msb(int x,int bits)
{
	int msb = 1<<(bits-1);
	if(x&msb)
		printf("MSB is set\n");
	else
		printf("MSB not set\n");
}

