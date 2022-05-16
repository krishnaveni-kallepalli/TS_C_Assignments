#include<stdio.h>

void SET()
{
    int n,pos;
    if((n>>pos)&0x1==1)
	printf("bit is set\n");
    else
	printf("%d\n",n|=(0X1<<pos));
}

