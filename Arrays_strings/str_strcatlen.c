#include<stdio.h>
#include<string.h>
void mystrcat(char d[],char s[]);
int main()
{
 char d[20] ,s[20];
 printf("enter the string name:\n");
 scanf("%s %s",s,d);
 mystrcat(d,s);
}
void mystrcat(char d[],char s[])
{
        int i=0,j=0,length;

        while(d[j] != '\0')
        {
                j++;
        }
        while(s[i]!='\0')
        {
                d[j]=s[i];
                i++;
                j++;
        }
        d[j]='\0';
        length=strlen(d);
        printf("%s\n",d);
        printf("String length :%d\n",length);
}
