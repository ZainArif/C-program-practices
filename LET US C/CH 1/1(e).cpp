#include<stdio.h>
#include<conio.h>
int main()
{
	int l,b,area1,per;
	float r,area2,cir;
	printf("Enter length and breadth of a rectangle: ");
	scanf("%d %d",&l,&b);
	printf("\nEnter radius of a circle: ");
	scanf("%f",&r);
	area1=l*b;
	per=2*(l+b);
	area2=3.142*r*r;
	cir=2*3.142*r*r;
	printf("\nArea of a rectangle=%d",area1);
	printf("\nPerimeter of a rectangle=%d",per);
	printf("\nArea of a circle=%.2f",area2);
	printf("\nCircumference of a circle=%.2f",cir);
}
