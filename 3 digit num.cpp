#include<stdio.h>
#include<conio.h>
int main()
{
int num,n1,n2,n3,a,b,c,sum;
printf("Enter a three digit number:");
scanf("%d",&num);
n1=num%10;
a=num/10;
n2=a%10;
b=a/10;
n3=b%10;
c=b/10;
sum=n1+n2+n3;
printf("Sum of number is %d",sum);
printf("Reverse number is %d%d%d",n1,n2,n3);
getche();	
return 0;
}





