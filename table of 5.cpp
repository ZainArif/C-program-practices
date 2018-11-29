#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=2;i<=20;i++)
	    for(j=1;j<=10;j++)
	        printf("%2d*%2d=%3d\n",i,j,i*j);
}
