#include<stdio.h>
#include<conio.h>
int main()
{
	int max,a[5][5]={
         	     {1,2,3,4,5},
				 {6,7,8,9,10},
				 {11,12,13,14,15},
		         {21,22,23,24,25},
				 {16,17,18,19,20},
			    };
    max=a[0][0];
	for(int r=0;r<5;r++)
	   for(int c=0;c<5;c++)
	   	  if(max<a[r][c])
	   	    max=a[r][c];
	printf("Max=%d",max);   			    
}
