#include<stdio.h>
int main()
{
   FILE *fp=fopen("file.txt","w");
   if(fp)
   printf("file opened sucessful\n");
   else
   printf("file opened not successful\n");
}
