#include<stdio.h>
#include<conio.h>
void sqr(int);
void cube(int);
int main()
{
	int a,b;
	printf("Enter a no to square:");
	scanf("%d",&a);
	sqr(a);
	printf("\nEnter a no to cube:");
	scanf("%d",&b);
	cube(b);
}
void sqr(int a)
{
	printf("Square of %d is %d\n",a,a*a);
}
void cube(int b)
{
	printf("Cube of %d is %d",b,b*b*b);
}
