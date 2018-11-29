#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 30
#define LIM 81
int main()
{
	char name[MAX][LIM];
	char *ptr[MAX], *temp;
	int count=0,out,in;
	while(count<MAX)
	{
		printf("Name %d:",count+1);
		gets( name[count] );
		if( strlen(name[count]) == 0)
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
	 printf("\nSorted list:");     
	for(out=0;out<count;out++)
	  printf("\n Name %d : %s",out+1,ptr[out] );      
}
