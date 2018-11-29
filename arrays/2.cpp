#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5]={2,7,3,5,4};
	int max=0;
	for(int j=0;j<5;j++)
	{
		if(max<a[j])
		max=a[j];
	}
	printf("max=%d",max);
}
