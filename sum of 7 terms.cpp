#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,j;
	float sum=0.0,fact;
	while(i<=7)
	{
		fact=1.0;
		for(j=1;j<=1;j++)
		    fact=fact*j;
		sum=sum+i/fact;
		i++;    
	}
	printf("Sum of series = %f",sum);
}
