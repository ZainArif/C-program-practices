#include<stdio.h>
#include<conio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=10;i+=2)
	{printf("%d\n",i);
	sum=sum+i;
	}
	printf("\nSum=%d",sum);
}
