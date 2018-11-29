#include<stdio.h>
#include<conio.h>
void fact();
int main()
{
	fact();
}
void fact()
{
	long n=1,res;
	while(n!=0)
	{
		printf("Enter a number:");
		scanf("%ld",&n);
		res=1;
		while(n>1)
		     res*=n--;
		printf("Factorial is %ld",res);
		printf("\n\n");     
	}
}
