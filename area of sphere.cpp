#include<stdio.h>
#include<conio.h>
#define PI 3.142
#define AREA(a) r=4*PI*a*a;
#define VOL(v)  r=(4*PI*v*v*v)/3;
float area(int); 
float vol(int);
int main()
{
	int r;
	printf("Enter radius of a sphere:");
	scanf("%d",&r);
	area(r);
	vol(r);
	printf("\nArea of a sphere is %.2f",area(r));
	printf("\nVolume of a sphere is %.2f",vol(r));
}
float area(int r)
{
	AREA(r);
	return r;
}
float vol(int r)
{
	VOL(r);
	return(r);
}
