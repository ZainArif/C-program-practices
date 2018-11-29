#include<stdio.h>
#include<conio.h>
int main()
{
	int i; char ch;
	for(i=0;i<3;i++)
	{
		printf("\nType in letter from a to e:");
		while((ch=getche())!='d')
		{
			printf("\nSorry.\n%c is incoreect\n",ch);
			printf("\nTry again");
		}
		printf("\nThats it\n");
	}
	printf("\nGame is over\n");
}
