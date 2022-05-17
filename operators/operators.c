1) printf("%d\n",1==5==5);
Ans: zero (0)
2) int i =0;
   printf("%d %d",i,i++);
Ans: 1 0
3) int x=5;
   printf("%d %d %d\n",x++,x++,x++);
Ans: 7 6 5
4) int x=2;
   printf("%d   ",++x++);
   printf("%d\n",x++);
Ans:Compilation Error

5) int k=1;
   printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");
Ans:1==1 is TRUE

6) int i=5;
   i=i++ - --i + ++i;
ANs:6//If we print the i value we will get 6.

7) int a=7;
   a+=a+=a-=6;
   printf("%d\n",a);
Ans:4

8) int x=10,y=5,p,q;
   p=x>9;
   q=p||(x=5,y=10);
   printf("%d %d %d\n",q,x,y);
ANs:1 10 5

9) int x=2,y=1;
   y+=x<<=2;
   printf("%d %d\n",x,y);
Ans:8 9

10) int x=2,y=4,z;
    z=y++*x++|y--;
    printf("%d\n",z);
Ans:13

11) int a=5,b=6,c=7,d;
    d=a&=b&=c&&a;
    printf("%d\n",d);
Ans:0

12) int i=10;
    i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;
    printf("%d\n",i);
Ans:4

13) int a=10,b=20;
    a=(a>5||b=6?40:50);
    printf("%d\n",a);
Ans: error: lvalue required 

14) printf("%x\n",-1>>4);
    printf("%x\n",-1<<4);
Ans:ffffffff
    fffffff0

15) int x=7;
    x=(x<<=x%2);
    printf("%d\n",x);
Ans:14

16) int a=2,b=5,c=1;
    printf("%d\n",(b>=a>=c?1:0));
Ans:1

17) int a=5;
    a=a-~a +1;
    printf("%d\n",a);
Ans:12

18) a=b=c=1;
    x=--a||++b*(3-1)/2&&b*(--c/3);
    printf("%d\n",x);
Ans:0

19) a=10
    b = -5
    c = 2.5
    printf("%d %d",sizeof(a) + sizeof((++b) *c, b);
Ans:8 -5

20) int i=5;
    i=i++ - i
    printf("%d",i)
Ans:-1

========================================= PREPROCESSORS AND MACROS ===========================

1) What will be the output of the C program?
#include<stdio.h>
#define CONDITION(i)\
printf("preprocessor works\n");                         
int main()
{
	CONDITION(0);
	return 0;
}
Ans:preprocessor works

2) What will be the output of the C program?
#include<stdio.h>
# define loop while(true)
int main()
{
	loop;  
	printf("preprocessor-aptitude");
	return 0;
}
Ans:Compilation Error(true undeclared)

3) What will be the output of the C program?
#include<stdio.h>
# define x --5
int main()
{
	printf("%d",x);
	return 0;
}
Ans:error: lvalue required 

4) What will be the output of the C program ?
#include<stdio.h>
#define sqr(x) ++x * ++x
int main()
{
	int a = 3, z;
	z = ++a * ++a;     
	a -= 3;
	printf("%d %d", sqr(a), z);
	return 0;
}
Ans:16 25

5) What will be the output of the C program?
#include<stdio.h>                      
#define x 1+2
int main()
{
	int i;
	i = x * x * x;
	printf("%d",i);
}
Ans:7

6) What will be the output of the C program?
#include<stdio.h>
#define a =
int main()
{
	int num a 6;
	printf("%d",num);
	return 0;
}
Ans:6

7) What will be the output of the C program?
#include<stdio.h>
#define fun(x,y) x*y
int main()
{
	int x = 2, y = 1;
	printf("%d",fun(x + 2, y - 1));
	return 0;
}
Ans:3

8) What will be the output of the C program?
#include<stdio.h>
int main()
{
	char DATE[15] = "Current Date";
	printf("%s\n", __DATE__ );
	return 0;
}
Ans:Feb  2 2022

9) What will be the output of the C program?
#include<stdio.h>
int main()
{
	char TIME[15] = "Current Time";
	printf("%s\n",__TIME__);
	return 0;
}
Ans:22:35:18(it will print current time)

10) What will be the output of the C program?
#include<stdio.h>
int main()
{	
	printf("Line :%d\n", __LINE__ );
	return 0;
}
Ans:Line :4

11) What will be the output of the C program?
#include<stdio.h>
#define  preprocessor_works(x, y)  \
	printf(#x " and " #y " are great!\n")
int main(void) {
	preprocessor_works(you, me);
	return 0;
}
Ans:you and me are great!

12) What will be the output of the C program?
#include<stdio.h>
# define puts  "%s C preprocessor"
int main()
{
	printf(puts, puts);
	return 0;
}
Ans:%s C preprocessor C preprocessor

13) What will be the output of the C program?
#include<stdio.h>
#define preprocessor(n) printf ("macro" #n " = %d", macro##n)
int main(void) {
	int macro25 = 47;
	preprocessor(25);
	return 0;
}
Ans:macro25 = 47

14) What will be the output of the C program?
#include<stdio.h>
#include<string.h>
#define MACRO(num) ++num 
int main()
{
	char *ptr = "preprocessor";
	int num =strlen(ptr);
	printf("%s  ", MACRO(ptr));
	printf("%d", MACRO(num));
	return 0;
}
Ans:reprocessor  13

15) What will be the output of the C program?
#include<stdio.h>
#define i 10
int main()
{
	#define i 20
	printf("%d",i);
	return 0;
}
Ans:20(warning is i is redefined)

16) What will be the output of the C program?
#include<stdio.h>
#define clrscr() 50
int main()
{
	clrscr();
	printf("%d\n",clrscr());
	return 0;
}
Ans:50

17) What will be the output of the C program?
#include<stdio.h>
#define int char
main()
{
	int i=5;
	printf ("sizeof (i) =%d", sizeof (i));
}
Ans:sizeof (i) =1

18) Write programs to understand the usage of below preprocessor directives.
#include, #if, #ifdef, #ifndef, #else, #elif, #endif, #define, #undef, #line, #error, and #pragma

===================================== TYPEDEF =========================================

1) In the following code, the P2 is Integer Pointer or Integer?
typedef int *ptr;
ptr p1, p2;
Ans:Integer Pointer

2)  In the following code what is 'P'?
typedef char *charp;
Ans:const charp P;

3) What is x in the following program?
#include<stdio.h>
int main()
{
    typedef char (*(*arrfptr[3])())[10];
    arrfptr x;
    return 0;
}
Ans:x is an array of three function pointers

4) What is apfArithmatics in the below statement?
typedef int (*apfArithmatics[3])(int,int); 
Ans:type of array of a function pointer and we can create a variable using this created type.

5) What is pf in the below statement?
typedef int (*pf)(int);
Ans:pf is a function pointer that store the address of address of a function which takes two ints as its agrs and returns an int.

6) What do the following declarations mean?
typedef char *pc; //pc is pointer to char                     
typedef pc fpc(); //fpc is function returning pointer to char
typedef fpc *pfpc; //pfpc is pointer to fpc
typedef pfpc fpfpc(); //fpfpc is function accepting unspecified arguments and returning pfpc
typedef fpfpc *pfpfpc; //pfpfpc is a pointer to fpfpc
pfpfpc a[N];          //a is an array of N pfpfpc
                    
7) Write few programs using typedef on structures and enums.
1. 
#include<stdio.h>
typedef enum
{
Mon, Tue, Wed, Thur, Fri, Sat, Sun
}days;

int main()
{
	days day;
	day = Wed;
	printf("%d",day);
	return 0;
}
Ans:2

2.
#include<stdio.h>
typedef struct{
  int x;
  int y;
}num;
int main() {
    num p1;
    p1.x = 1;
    p1.y = 3;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);
    return 0;
}
Ans: 1 3
