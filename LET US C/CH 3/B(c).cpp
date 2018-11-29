#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,p;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	p=a;
	for(int c=1;c<b;c++)
	    p*=a;
	
	printf("\n\n%d raise to the power of %d = %d",a,b,p);
}
