#include<stdio.h>
#include<conio.h>
int main()
{
	int days;
	printf("How many days the member is late to return the book: ");
	scanf("%d",&days);
	if(days>=1 && days<=5)
	printf("\nFine is 50 paise.");
	else if(days>=6 && days<=10)
	printf("\nFine is one rupee.");
	else if(days>=11 && days<=30)
	printf("\nFine is 5 rupees.");
	else
	printf("\nYour membership will be cancelled.");
}

