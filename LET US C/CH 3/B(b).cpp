#include<stdio.h>
#include<conio.h>
int main()
{
	long n=1,res;
	while(n!=0)
	{
		printf("Enter a no: ");
		scanf("%ld",&n);
		res=1;
		while(n>1)
		     res*=n--;
		printf("\nFactorial is %ld",res);  
		printf("\n\n");   
	}
}
