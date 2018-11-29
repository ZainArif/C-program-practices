#include<stdio.h>
#include<conio.h>
int main()
{
	char ch='a';
	do
	{
		printf("\nType in letter from a to e:");
		while((ch=getche())!='d')
		{
			printf("\nSorry %c is incoreect",ch);
			printf("\nTry again");
		}
		printf("\nThats it");
	    printf("\nPlay again?\n press y/n:");
	}
	while(getche()=='y');
    printf("\nThanks for playing!");
}

