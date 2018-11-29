#include<stdio.h>
#include<conio.h>
int main()
{
    float math,phy,chem,marks,per;
	char ch='%';
	printf("\nEnter marks of mathematics:");  
	scanf("%f",&math);
	printf("\nEnter marks of physics:"); 
	scanf("%f",&phy);
	printf("\nEnter marks of chemistry:");  
	scanf("%f",&chem);
	printf("\t\t\t\tMarks sheet\n");
	printf("\n Mathematics= %.0f",math);
	printf("\n Physics= %.0f",phy);
	printf("\n Chemistry= %.0f",chem);
	printf("\n Total marks= 300");
	marks=math+phy+chem;
	printf("\n Marks obtained= %.0f",marks);
    per=(marks/300)*100;
	printf("\n Percentage= %.2f%c",per,ch);
	if(per>=80)
	printf("\n Grade= A+");
	else if(per>=70 && per<80)
	printf("\n Grade= A");
	else if(per>=60 && per<70)
	printf("\n Grade= B");
    else if(per>=50 && per<60)
    printf("\n Grade= C");
    else if(per>=40 && per<50)
    printf("\n Grade= D");
    else 
    printf("\n Grade= F");
}
