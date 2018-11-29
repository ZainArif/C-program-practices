#include<stdio.h>
#include<conio.h>
int main()
{
int roll_no;
printf(" Enter student roll no:");
scanf("%d",&roll_no);
char section;
printf("\n Enter student section:");
section=getche();
float percentage;
printf("\n Enter student percentage:");
scanf("%f",&percentage);
printf("\n The student roll no is %d",roll_no);
printf("\n The student section is %c",section);
printf("\n The student percentage is %f",percentage);
getche();
return 0;
}




























