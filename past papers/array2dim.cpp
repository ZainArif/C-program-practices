#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[4][4]={ {5,10,15,20},
	                {25,30,35,40},
					{45,50,55,60},
					{65,70,75,80} 
				   };
	printf("Base address of array: %d",arr);
	printf("\nBase address of array = %d",arr+0);
	printf("\nvalue of 60 = %d",*( *(arr+2)+3 ) );	
	printf("\n%d",*(arr+2)+1);		   
				   
}

