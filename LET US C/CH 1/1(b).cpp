#include<stdio.h>
#include<conio.h>
int main()
{
	float km,m,cm,in,ft;
	printf("Enter the distance between two cities in kilometers: ");
	scanf("%f",&km);
	m=km*1000;
	cm=m*100;
	in=m*36;
	ft=in/12;
	printf("\nDistance in meters = %.2f",m);
	printf("\nDistance in centimeters = %.2f",cm);
	printf("\nDistance in inches = %.2f",in);
	printf("\nDistance in feet = %.2f",ft);
}
