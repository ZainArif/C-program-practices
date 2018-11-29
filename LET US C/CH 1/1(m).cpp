#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	printf("Enter the length of three sides of a triangle:");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	area=s*(s-a)*(s-b)*(s-c);
    area=sqrt(area);
    printf("\nArea of a triangle = %.2f metersq",area);
}
