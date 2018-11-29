#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	int mat1[2][2];
	int mat2[2][2];
	printf("Enter no for matrix 1:");
	for(int r=0;r<2;r++)
       for(int c=0;c<2;c++)
          	scanf("%d",&mat1[r][c]);
    printf("Enter no for matrix 2:");
    for(int r=0;r<2;r++)
       for(int c=0;c<2;c++)
     	   scanf("%d",&mat2[r][c]);
    a=mat1[0][0]*mat2[0][0];
	b=mat1[0][1]*mat2[1][0];
	c=mat1[0][0]*mat2[0][1];
	d=mat1[0][1]*mat2[1][1];
	e=mat1[1][0]*mat2[0][0];
	f=mat1[1][1]*mat2[1][0];
	g=mat1[1][0]*mat2[0][1];
	h=mat1[1][1]*mat2[1][1];
	printf("%d\t%d\n%d\t%d",a+b,c+d,e+f,g+h);
}
