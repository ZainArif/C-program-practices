#include<stdio.h>
#include<conio.h>
int main()
{
	int l,b,area,per;
	printf("Enter length and breadth of a rectangle: ");
	scanf("%d %d",&l,&b);
	area=l*b;
	per=2*(l+b);
	if(area>per)
	printf("\nArea of the rectangle is greater than its perimeter.");
	else
	printf("\nArea of the triangle is not greater than its perimeter.");
}
