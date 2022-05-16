
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100

void check(char *s,char *w);

int main()
{
        char s[N],w[N];
        printf("Enter the string:");
        scanf("%[^\n]%*c",s);
        printf("Enter the word to be searched:");
        scanf("%[^\n]%*c",w);
        check(s,w);
        return 0;
}

void check(char *s,char *w)
{
        int index=0,found=0,i;
        while(s[index] != '\0')
        {
                if(s[index]==w[0])
                {
                        i=0;
                        found=1;
                        while(w[i] != '\0')
                        {
                                if(s[index+i] != w[i])
                                {
                                        found=0;
                                        break;
                                }
                                i++;
                        }
                }
                if(found==1)
                {
                        break;
                }
                index++;

        }
        if(found==1)
        {
                printf("\n '%s' is found at index %d\n",w,index+1);
        }
        else
        {
                printf("\n '%s' is not found\n",w);
        }
}
