#include<stdio.h>
#include<conio.h>
int main()
{
	int yr;
	printf("Enter a year: ");
	scanf("%d",&yr);
	yr=(yr%4==0)? printf("\n%d is a leap year.",yr):printf("\n%d is not a leap year.",yr);
}
