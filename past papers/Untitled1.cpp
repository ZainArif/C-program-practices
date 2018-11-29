#include<stdio.h>
#include<conio.h>
int main ()
{
	int x,pc=0,nc=0,zc=0;
	do
	{
		printf("Enter number:");
		scanf("%d",&x);
		if( x>0 ) 
		  pc++;
		else if( x<0 )
		  nc++;
		else
		   zc++;    
    }
	while( x!= 0);
	printf("\nPositive numnber counts = %d",pc);
	printf("\nNegative numnber counts = %d",nc);
	printf("\nZero counts = %d",zc);
}
