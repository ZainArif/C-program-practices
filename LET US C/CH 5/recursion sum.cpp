#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
	int n,su;
	printf("Enter a five digit number: ");
	scanf("%d",&n);
	su=sum(n);
	printf("\nSum=%d",su);
}
int sum(int a)
{
	int s,x;
	if(a>=1)
	{
		x=(a%10);
	    a/=10;
	    s=x+sum(a);
	    return(s);
	}
	else
	   return(0);	
}
