#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3],sum=0;
	for(int i=0;i<3;i++)
	{
		printf("Enter value %d: ",i+1);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("\nsum=%d",sum);
}
