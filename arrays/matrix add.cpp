#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d;
	int mat1[2][2]={ {2,4}, {6,8} };
	int mat2[2][2]={ {1,2}, {3,4} };
	a=mat1[0][0]+mat2[0][0];
	b=mat1[0][1]+mat2[0][1];
	c=mat1[1][0]+mat2[1][0];
	d=mat1[1][1]+mat2[1][1];
	printf("%d\t%d\n%d\t%d",a,b,c,d);
}
