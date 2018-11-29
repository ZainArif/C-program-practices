#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 80
#define LEN 40
int main()
{
	char name[MAX][LEN], *ptr[MAX],*temp;
	int count=0,in,out;
	while( count<MAX )
	{
		printf("Enter name of a country %d:",count+1);
		gets(name[count]);
		if( strlen(name[count])==0)
		  break;
		ptr[count++]=name[count];  
	}
	for(out=0;out<count-1;out++)
	    for(in=out+1;in<count;in++)
	        if( strcmp( ptr[out],ptr[in] ) > 0)
	        {
	        	temp=ptr[in];
	        	ptr[in]=ptr[out];
	        	ptr[out]=temp;
	        }
	for(out=0;out<count;out++)
	   printf("\nNmae of country %d : %s",out+1,ptr[out]);
}
