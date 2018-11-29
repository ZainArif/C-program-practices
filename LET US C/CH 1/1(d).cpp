#include<stdio.h>
#include<conio.h>
int main()
{
	float fr,cent;
	printf("Enter temperature of a city in fahrenheit: ");
	scanf("%f",&fr);
	cent=5.0/9.0 *(fr-32);
	printf("\nTemperature in centigrade = %.2f",cent);
}
