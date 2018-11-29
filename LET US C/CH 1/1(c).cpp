#include<stdio.h>
#include<conio.h>
int main()
{
    float m1,m2,m3,m4,m5,agr,per;
	char ch='%';
	printf("Enter marks of 5 subjects: ");
	scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
	agr=m1+m2+m3+m4+m5;
	per=(agr/500)*100;
	printf("\nAggregate marks = %.0f",agr);
	printf("\nPercentage marks = %.2f%c",per,ch);
}
