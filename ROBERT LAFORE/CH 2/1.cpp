#include<stdio.h>
#include<conio.h>
int main()
{
	float years, minutes;
	printf("Please type your age in years: ");
	scanf("%f", &years);
	minutes= years*365*24*60 ;
	printf("You are %.1f minutes old.\n", minutes);
}
