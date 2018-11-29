#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,ans;
	printf("Enter any three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	a=(a>b && a>c)? printf("\n%d is greatest.",a): printf("");
	b=(b>a && b>c)? printf("\n%d is greatest.",b): printf("");
	c=(c>a && c>b)? printf("\n%d is greatset.",c): printf("");
}
