#include<stdio.h>
#include<conio.h>
int main()
{
	int digit,num,sum=0,rev=0,value=10000;
	printf("Enter a 5 digit number: ");
	scanf("%d",&num);
	for(int i=0;i<5;i++)
	{
		digit=num%10;
		sum+=digit;
		rev+=(digit*value);
		value/=10;
		num/=10;
	}
	printf("\nSum of digits = %d",sum);
	printf("\nReverse no = %d",rev);
   
}
