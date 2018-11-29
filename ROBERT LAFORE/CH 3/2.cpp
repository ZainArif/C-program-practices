#include<stdio.h>
#include<conio.h>
int main()
{
	int count=0;
	printf("Type in a phrase:\n");
	while(getche()!='.')
	      count++;
	printf("\ncharacter count is %d",count);      
}
