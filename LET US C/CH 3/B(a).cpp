#include<stdio.h>
#include<conio.h>
int main()
{
	int otpay,i,hour;
	for(i=1;i<=10;i++)
	{
		printf("Enter no. of hours worked: ");
		scanf("%d",&hour);
		if(hour>40)
		{
			otpay=(hour-40)*12;
			printf("\nOvertime pay = %d",otpay);
		}
		else
		printf("\nNo overtime pay because no. of hours worked are less than 40 hours.");
		printf("\n\n");
	}
}
