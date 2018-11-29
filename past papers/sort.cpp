#include<stdio.h>
#include<conio.h>
#define MAX 20
void sort( int[],int);
void max( int[],int);
int main()
{
	int list[MAX],size=0,dex;
	do
	{
		printf("Type a no. :");
		scanf("%d",&list[size]);
	}
	while( list[size++]!=0);
	max(list,size-1);
	sort(list,--size);
	for(dex=0;dex<size;dex++)
	   printf("\n%d",list[dex]);
}
void sort( int list[], int size)
{
	int out,in,temp;
	for(out=0;out<size-1;out++)
	   for(in=out+1;in<size;in++)
	      if( list[out]>list[in] )
	      {
	      	temp=list[out];
	      	list[out]=list[in];
	      	list[in]=temp;
	      }
}
void max( int list[], int size)
{
	int max,dex,ind=0;
	max=list[0];
	for(dex=1;dex<size;dex++)
	   if(max<list[dex])
	   {
	   	max=list[dex];
	   	ind=dex;
	   }
	   	printf("\nMax value = %d",max);
        printf("\nArray position = %d",ind);
}
