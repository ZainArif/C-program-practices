#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c,sum;
	printf("Enter three angles of the triangle: ");
	scanf("%f %f %f",&a,&b,&c);
	sum=a+b+c;
	if(sum==180)
	printf("\nTriangle is valid.");
	else
	printf("\nTriangle is not valid.");
}
