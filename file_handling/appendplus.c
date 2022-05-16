#include<stdio.h>

int main()
{
FILE *fp = fopen("file.txt","a+");// if file is exist, it will open successfully

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
int count;
for (c = getc(fp); c != EOF; c = getc(fp))
{
	count = count + 1;
	
}
rewind(fp);
while((c=fgetc(fp))!=EOF)
{
	printf("%c\n",c);
	
}

fclose(fp);
printf("%d",count);
//#endif
return 0;
}
