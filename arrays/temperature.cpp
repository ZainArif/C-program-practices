#include<stdio.h>
#include<conio.h>
int main()
{
	int a[7],sum=0,dex,avg,max,min;
	for(int i=0;i<7;i++)
	{
		printf("Enter temperature of day %d: ",i+1);
		scanf("%d",&a[i]);
		sum+=a[i];
		avg=sum/7;
	}
	max=a[0];
	min=a[0];
	for(dex=1;dex<7;dex++)
	{
		if(max<a[dex])
		  max=a[dex];
		if(min>a[dex])
		  min=a[dex];  
	}
	printf("Average temperature= %d\nMax temperature= %d\nMinimum temperature= %d",avg,max,min); 
	return 0;
}
