#include<stdio.h>
#include<conio.h>
void sum(int,int);
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	sum(a,b);
}
void sum(int a, int b)
{
	printf("Sum of %d and %d is %d",a,b,a+b);
}
