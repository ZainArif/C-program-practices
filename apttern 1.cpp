#include<stdio.h>
#include<conio.h>
int main()
{
	int row,col,cs=65,ce=71,i=0,space=0;
	for(row=7;row>=1;row--)
	{
	   for(col=1;col<=row;col++)
	      {
	       if(cs<ce)
	      	printf("%c",cs++);
	       }
	   cs=65;  
	   for(int gap=1;gap<space;gap++)
	       printf(" ");	   
	   ce-=i++;
		   for(col=1;col<=row;col++)
	      {	      	
	      	if(ce>=cs)
	      	   printf("%c",ce--);
	      }		   
	    ce=71;
	    space+=(col-row)+1;  
	         printf("\n");
    }
}
