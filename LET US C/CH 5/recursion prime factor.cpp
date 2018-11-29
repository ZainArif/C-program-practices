#include<stdio.h>
#include<conio.h>
void factor(int,int);
int main()
{
    int n,i=2;	
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("\nPrime factors are:");
	factor(n,i);
}
void factor(int a,int i)
{
	if( (a!=1) )
    {
    	if( (a%i==0))
    	  {
    	  	a/=i;
    	  	printf("\n%d",i);
    	  	factor(a,i);
    	  }
    	else
    	  {
    	  	i++;
    	  	factor(a,i);
    	  } 
    } 
}
