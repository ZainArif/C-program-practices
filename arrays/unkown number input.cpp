#include<stdio.h>
#include<conio.h>
int main()
{
	int temp[40],sum=0,dex=0,num;
	do{
		if(dex<=40)
	    {
	    	printf("Enter temperature of day %d: ",dex+1);
	    	scanf("%d",&temp[dex]);
	    }
	    else break;
	}
	while(temp[dex++]>0);
	num=dex-1;
	for(dex=0;dex<num;dex++)
	    sum+=temp[dex];
	printf("\nAverage temperature= %d",sum/num);
}
