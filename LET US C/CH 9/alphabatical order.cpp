#include<stdio.h>
#include<conio.h>
#include<string.h>
#define NUM 10
#define LEN 12
int main()
{
    static char name[NUM][LEN];
    char *ptr[NUM],*temp;
	int count=0,in,out;
	while(count<NUM)
	{
		printf("Name %d: ",count+1);
		gets(name[count]);
		if( strlen(name[count])==0 )
		  break;
		else
		  ptr[count]=name[count];  
		count++;  
	}
	for(out=0;out<count-1;out++)
	   for(in=out+1;in<count;in++)
	      if( strcmp(ptr[out],ptr[in]) >0 )
	      {
	      	temp=ptr[in];
	      	ptr[in]=ptr[out];
	      	ptr[out]=temp;
	      }
   printf("\nsorted list:\n");
   for(int k=0;k<count;k++)
      printf("Name %d: %s\n",k+1,ptr[k]);    
}
