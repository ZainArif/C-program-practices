#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,sum;
	printf("Enter three sides of the triangle: ");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b;
	if(sum>(a>b && a>c))
	printf("\nTriangle is valid.");
	else if(sum>(b>a && b>c))
	printf("\nTriangle is valid.");
	else if(sum>(c>a && c>b))
	printf("\nTriangle is valid.");
	else
	printf("\nTriangle is not valid.");
}
