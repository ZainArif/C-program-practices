#include<stdio.h>
#include<conio.h>
int main()
{
	int cp,sp,p,l;
	printf("Enter cost price and selling price of an item: ");
	scanf("%d %d",&cp,&sp);
	p=sp-cp;
	l=cp-sp;
	if(p>0)
	printf("\nThe seller has made a profit of Rs%d.",p);
	else
	printf("\nThe seller is in loss by Rs%d.",l);
}
