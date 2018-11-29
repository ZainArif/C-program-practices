#include<stdio.h>
#include<conio.h>
#define MAXSIZE 20
void sort(int[],int);
int main()
{
	int list[MAXSIZE],size=0,dex;
	do
	{
		printf("Type no: ");
		scanf("%d",&list[size]);
	}
	while(list[size++]!=0);
	sort(list,--size);
	for(dex=0;dex<size;dex++)
	printf("\n%d",list[dex]);
}
void sort(int list[],int size)
{
	int out,in,temp;
	for(out=0;out<size-1;out++)
	   for(in=out+1;in<size;in++)
	       if(list[out]<list[in])
	       {
	       	temp=list[out];
	       	list[out]=list[in];
	       	list[in]=temp;
	       }
}
