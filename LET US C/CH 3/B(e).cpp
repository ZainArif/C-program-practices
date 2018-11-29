#include<stdio.h>
#include<conio.h>
int main()
{
	int num,sum,n1,n2,n3,a,b;
	for(num=1;num<=500;num++) {
	n1=num%10;
	a=num/10;
	n2=a%10;
	b=a/10;
	n3=b%10;
	sum=(n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3);
	if(sum==num)
	printf("\n%d",num);
    }
}
