#include<stdio.h>
#include<conio.h>
#define MAX 70
int main()
{
	int num[MAX],sum=0,i=0;
	do{
		if(i<MAX)
		{
		
	   	printf("Enter number:");
	   	scanf("%d",&num[i]);
	   	sum+=*(num+i);
	    }
	    else
	      break;
        }
	   while( num[i++]!=0 );
	   printf("\nSum of numbers = %d",sum);
}
