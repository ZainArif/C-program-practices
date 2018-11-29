#include<stdio.h>
#include<conio.h>
int main()
{
	float temp[40],sum=0.0;
	int num,day=0;
	float *ptr;
	       ptr=temp;
	do
	{
		printf("Enter temperature for day %d:",++day);
		scanf("%f",ptr);
	}
	while(*(ptr++)>0);
	ptr=temp;
	num=day-1;
	for(day=0;day<num;day++)
	    sum+=*(ptr+day);
    printf("\nAverage=%.1f",sum/num);
}
