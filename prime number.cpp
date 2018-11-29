#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=50;i++) {
	    for(j=2;j<i;j++)
	       {
	       	if(i%j==0)
	       	break;
	       }
	       if(j==i)
	       printf("%d is a prime number.\n",i);
    }
}
