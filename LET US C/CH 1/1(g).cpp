#include<stdio.h>
#include<conio.h>
int main()
{
	int num,n1,n2,n3,n4,n5,a,b,c,d,sum;
	printf("Enter a 5 digit number: ");
	scanf("%d",&num);
	n1=num%10;
	a=num/10;
	n2=a%10;
	b=a/10;
	n3=b%10;
	c=b/10;
	n4=c%10;
	d=c/10;
	n5=d%10;
	sum=n1+n2+n3+n4+n5;
	printf("\nSum of digits = %d",sum);
}
