#include<stdio.h>
#include<conio.h>
#include<math.h>
void mypow(int,int);
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	mypow(a,b);
}
void mypow(int a, int b)
{
	int n=pow(a,b);
	printf("\n\n%d raise to the power of %d = %d",a,b,n);
}
