#include<stdio.h>
#include<conio.h>
int main()
{
	float n_1=1,n_2=1;
	while (!(n_1==0 && n_2==0))
	{
		printf("\nEnter first number:");
		scanf("%f",&n_1);
		printf("\nEnter second number:");
		scanf("%f",&n_2);
		printf("\nEnter operator:");
		switch( getche() )
		{
		
		 case '+':
		  printf("\n%.2f",n_1+n_2);
		  break;
		 case '-':
		       printf("\n%.2f",n_1-n_2);
		       break;
	     case '*':
		       printf("\n%.2f",n_1*n_2);
		       break;
		 case '/':
		 		printf("\n%.2f",n_1/n_2);
		 		break; 
		 default:
		    printf("\nunknown operator");	   	           
	    }
    }
}
