#include<stdio.h>
#include<conio.h>
int main()
{
	char l1,l2;
	while(l1!='\r')
	{
		printf("Enter first letter:");
		l1=getche();
		printf("\nEnter second letter:");
		l2=getche();
		printf("\nThere are %d letters between ",l2-l1-1);
		printf("\n\n");
	}
}
