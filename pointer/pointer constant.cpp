#include<stdio.h>
#include<conio.h>
int main()
{
	float temp[40],sum=0.0;
	int num,day=0;
	do
	{
		printf("Enter temperature:");
		scanf("%f",temp+day);
	}
	while(*(temp+day++)>0);
	num=day-1;
	for(day=0;day<num;day++)
	    sum+=*(temp+day);
    printf("\nAverage=%.1f",sum/num);
}
