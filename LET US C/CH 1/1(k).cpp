#include<stdio.h>
#include<conio.h>
int main()
{
	int cp,sp,p;
	printf("Enter total selling price and total profit earned of 15 items: ");
	scanf("%d %d",&sp,&p);
	cp=sp-p;
	printf("\nCost price of one item is %d.",cp/15);
}
