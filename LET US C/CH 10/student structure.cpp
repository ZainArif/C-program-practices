#include<stdio.h>
#include<conio.h>
#include<strings.h>
#define MAX 3
int main()
{
	struct student{ int rollno,year;
	                char name[50],dept[20],course[20];
                  } st[MAX];
	for(int i=0;i<MAX;i++)
	{
		printf("Enter student name,roll no,department,year of joining and course:\n");
//		gets(st[i].name);
		scanf("%s %d %s %d %s",&st[i].name,&st[i].rollno,&st[i].dept,&st[i].year,&st[i].course);
	} 
	for(int k=0;k<MAX;k++)
	   printf("\nName=%s, Roll no=%d, Dept=%s, Year=%d, Course=%s",st[k].name,st[k].rollno,st[k].dept,st[k].year,st[k].course);             
	
    
}
