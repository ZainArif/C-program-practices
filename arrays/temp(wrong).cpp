#include<stdio.h>
#include<conio.h>
int main()
{
	int a[7],sum=0,avg,max=0,min;
	for(int i=0;i<7;i++)
	{
		printf("Enter temperature of day %d: ",i+1);
		scanf("%d",&a[i]);
		sum+=a[i];
		avg=sum/7;
		if(max<a[i])
		  max=a[i];
	    min=a[0];
	    if(min>a[i])
		   min=a[i];  
	}
	printf("Average temperature= %d\nMax temperature= %d\nMinimum temperature= %d",avg,max,min); 
	return 0;
}
