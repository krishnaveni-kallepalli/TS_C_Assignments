#include<stdio.h>
int main()
{
int a=10;
int b=5;

//arithmetic 
printf("%d\n",a+b);
printf("%d\n",a-b);
printf("%d\n",a*b);
printf("%d\n",a/b);
printf("%d\n",a%b);
//relational
printf("%d\n",a==b);
printf("%d\n",a!=b);
printf("%d\n",a<b);
printf("%d\n",a>b);
printf("%d\n",a<=b);
printf("%d\n",a>=b);
//logical
printf("%d\n",a&&b);
printf("%d\n",a||b);
printf("%d\n",!(a&&b));
//assignment
printf("%d\n",a=b);
printf("%d\n",a+=b);
printf("%d\n",a|=b);
printf("%d\n",a&=b);
//inc/dec
printf("%d\n",++a);
//conditional
a>b?(printf("%d is greater",a)):(printf("%d is greater",b));
//special
float f=12.4;
char c='c';
printf("%d\n",sizeof(a));//sizeof
printf("%ld\n",sizeof(f));
printf("%ld\n",sizeof(c));

char c='c';
int sum;
sum=a+c;
printf("sum=%d\n",sum);//implicit typcasting

float z;//typecasting explicit
z=(float)sum/b;
printf("z=%f\n",z);

int p;//comma
p=1,2,3;
printf("%d\n",a);

return 0;
}
