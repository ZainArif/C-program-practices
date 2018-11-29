#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6]={20,15,25,10,13,18},*min;
	min=&a[0];
	for(int i=1;i<6;i++)
    {
    	if( *min>*(a+i) )
    	    min=&a[i];   
    }
    printf("Smallest number=%d",*min);
}
