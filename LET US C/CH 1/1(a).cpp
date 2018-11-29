#include<stdio.h>
#include<conio.h>
int main()
{
	float bs,da,hr,gs;
	printf("Enter the basic salary of Ramesh: ");
	scanf("%f",&bs);
	da=bs*0.4;
	hr=bs*0.2;
	gs=bs+da+hr;
	printf("\nBasic salary of Ramesh = %.2f",bs);
	printf("\nDearness allowance of Ramesh = %.2f",da);
	printf("\nHouse rent allowance of Ramesh = %.2f",hr);
	printf("\nGross salary of Ramesh = %.2f",gs);
}
