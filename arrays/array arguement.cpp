#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int max(int[],int);
int main()
{
	int list[MAXSIZE],size=0,num;
	do
	{
		printf("Type no.: ");
		scanf("%d",&list[size]);
	}
	while(list[size++]!=0);
	num=max(list,size-1);
	printf("\nMax=%d",num);
}
int max(int list[],int size)
{
	int dex,max,ind=0;
	max=list[0];
	for(dex=1;dex<size;dex++)
	{
		if(max<list[dex])
		  {
		  	max=list[dex];
		  	ind=dex;
		  }
    }
    printf("\nArray location=%d",ind);
	return(max);	  
}
