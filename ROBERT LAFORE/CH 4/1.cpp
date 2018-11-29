#include<stdio.h>
#include<conio.h>
int main()
{
	int speed;
	printf("Enter a speed at which you drives:");
	scanf("%d",&speed);
	if(speed>75)
	  printf("\nI am going to lock you in police station.");
	else
	    if(speed>55)
		   printf("\nI am warning you this time, drive slowly.");
		else
		    if(speed>45)
			   printf("\nAlways drive at this speed.");
			else
			    printf("\nYou can speed up.");        
}
