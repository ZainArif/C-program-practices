#include<stdio.h>
#include<conio.h>
int main()
{
	float w,h,BMI;
	printf("Enter your weight in kg and height in meters: ");
	scanf("%f %f",&w,&h);
	BMI=w/(h*h);
	if(BMI<15)
	printf("\nBMI category is Starvation.");
	if(BMI>=15.1 && BMI<=17.5)
	printf("\nBMI category is Anorexic.");
	if(BMI>=17.6 && BMI<=18.5)
	printf("\nBMI categoyr is Underweight.");
	if(BMI>=18.6 && BMI<=24.9)
	printf("\nBMI category is Ideal.");
	if(BMI>=25 && BMI<=25.9)
	printf("\nBMI category is Overweight.");
	if(BMI>=30 && BMI<=30.9)
	printf("\nBMI category is Obese.");
	if(BMI>=40)
	printf("\nBMI category is Morbidly Obese.");
}
