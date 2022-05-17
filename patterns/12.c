#include<stdio.h>
int main()
{
    int rows=5,cols=5;
    int i,j;
    for(i=0;i<rows;i++,printf("\n"))
    {
        for(j=0;j<cols+(2*i);j++)
        {
            if((2*i)>j)
            printf(" ");
            else 
            {
                printf("* ");
            }

        }
    }
}
