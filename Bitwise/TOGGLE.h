#include<stdio.h>
void TOGGLE()
{
    int n,pos;
    if(n&(0x1 << pos))
        printf("Bit is 1\n");
    else
        printf("Bit is 0\n");
    n=n^(0x1<<pos);   
    printf("%d",n);//7
}

