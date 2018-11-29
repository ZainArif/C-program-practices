#include<stdio.h>
#include<conio.h>
int main()
{
	int a,ans=1,temp;
	printf("Enter any number:");
	scanf("%d",&a);
	temp=a;
	while(temp>0)
	{
		ans*=temp;
		temp--;
	}
	printf("\nFactorial of %d=%d",a,ans);
}
