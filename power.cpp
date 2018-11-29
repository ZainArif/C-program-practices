#include<stdio.h>
#include<conio.h>
int main()
{
	int b,p,rep=1,num=1;
	printf("Enter two numbers: ");
	scanf("%d %d",&b,&p);
	while(rep<=p)
	{
		num*=b;
		rep++;
	}
	printf("\n%d raise to %d = %d",b,p,num);
}
