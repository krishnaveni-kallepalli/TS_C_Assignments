#include<stdio.h>

int main()
{
FILE *fp = fopen("file.txt","w+");// if file is exist, it will open successfully

if(fp)
	printf("File opened successful\n");
else	
	printf("File opened not successful\n");
//#if 0
char c;

fputc('B',fp);
fputc('a',fp);
fputc('n',fp);
fputc('n',fp);
fputc('y',fp);
fputc('M',fp);

rewind(fp);
while((c=fgetc(fp))!=EOF)
{
	printf("%c",c);
}
fclose(fp);
//#endif
return 0;
}
