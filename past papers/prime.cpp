#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,i,x;
	printf("Enter 2 numbers:");
	scanf("%d %d",&num1,&num2);
	for(i=(num1+1);i<num2;i++)
	{
	
       for(x=2;x<i;x++)	
	   {
	   	if(i%x==0)
	   	{
	   		printf("\n%d is not a prime no.",i);
	   		break;
	   	}
	   }
	if(x==i)
	printf("\n%d is a prime no.",i);   
    }
}
