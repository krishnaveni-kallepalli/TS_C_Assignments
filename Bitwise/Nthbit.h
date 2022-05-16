#include<stdio.h>

void nthbitset(int x,int bits)
{
	int n = 1<<(bits-1);
	if(x&n)
		printf("%dth is set\n",bits);
	else
		printf("%dth not set\n",bits);
}
