#include<stdio.h>
#include<conio.h>
float pro(int,float);
int main()
{
	int n;
	float o,p;
	printf("First enter an integer then decimal number:\n");
	scanf("%d %f",&n,&o);
	p=pro(n,o);
	printf("\nProduct=%.2f",p);
}
float pro(int a,float b)
{
	float r;
	r=a*b;
	return(r);
}	
