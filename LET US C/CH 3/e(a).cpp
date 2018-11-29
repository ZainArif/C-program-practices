#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i;
	for(num=0;num<=300;num++)
	{
		i=2;
		while(i<num)
		{
			if(num%i==0)	
			 break;
			i++; 
		}
		if(i==num)
		printf("%d = prime number.\n",num);
	}
}
