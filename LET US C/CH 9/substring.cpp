#include<stdio.h>
#include<conio.h>
#define LIM 30
int main()
{
	int p,l,k=0;
	char a[LIM]="Working with srings is fun.",b[LIM];
	printf("Enter a position and length for substring:\n");
	scanf("%d%d",&p,&l);
	p--;
	if( l==0 )
	  while(p<LIM)
	      b[k++]=a[p++];
	else
	{
		l=l+p-1;
		while(p<=l)
		    b[k++]=a[p++];
	}
	for(int x=0;x<k;x++)
	   printf("%c",b[x]);
}
