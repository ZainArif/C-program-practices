#include<stdio.h>
#include<conio.h>
void fib(int,int,int);
int main()
{
	int a=1,b=1,c=2;
	printf("Fibonacci sequence of first 25 numbers:\n%d\n%d",a,b);
	fib(a,b,c);	
}
void fib(int x,int y,int z)
{
	int k;
	k=x+y;
	printf("\n%d",k);
    z++;
    if( z<=25 )
    {
    	fib(y,k,z);
    }
}
