#include<stdio.h>
#include<conio.h>
int main()
{
	float num;
	printf("Enter a number to square:");
	scanf("%f",&num);
    num=num*num;
    printf("%.1f",num);
}
