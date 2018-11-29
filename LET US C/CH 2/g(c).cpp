#include<stdio.h>
#include<conio.h>
int main()
{
	float h,c,t;
	printf("Enter hardness of steel: ");
	scanf("%f",&h);
	printf("\nEnter carbon content in steel: ");
	scanf("%f",&c);
	printf("\nEnter tensile strength of steel: ");
	scanf("%f",&t);
	if(h>50 && c<0.7 && t>5600)
	printf("\nGrade is 10.");
	else if(h>50 && c<0.7 && t<5600)
	printf("\nGrade is 9.");
	else if(h<50 && c<0.7 && t>5600)
	printf("\nGrade is 8.");
	else if(h>50 && c>0.7 && t>5600)
    printf("\nGrade is 7.");
    else if(h>50 || c<0.7 || t>5600)
    printf("\nGrade is 6.");
    else
    printf("\nGrade is 5.");
}
