#include<stdio.h>
#include<conio.h>
void factor(int);
int main()
{
    int n;	
	printf("Enter a number: ");
	scanf("%d",&n);
	factor(n);
}
void factor(int a)
{
	int i=2;
	printf("\nPrime factors are:");
	while( (a!=1) )
    {
    	if( (a%i==0))
    	  {
    	  	a/=i;
    	  	printf("\n%d",i);
    	  }
    	else
		  i++;  
    } 
}
