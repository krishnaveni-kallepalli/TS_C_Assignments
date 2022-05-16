#include<stdio.h>

void display(int n)
{
    if(n==0)
        return;
    printf("%d\n",n);
    display(n-1);
}
int main()
{
    int a=10;
    display(a);
}







/*
#include<stdio.h>

void display(int n)
{
    if(n==11)
        return;
    printf("%d\n",n);
    display(n+1);
}
int main()
{
    int a=1;
    display(a);
}*/
