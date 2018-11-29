#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	do
	{
		printf("\nGuess a character from a to f.\n");
		while( (ch=getche() ) != 'c')
		{
			printf("\nSorry! %c is incorrect.",ch);
			printf("\nTry again.\n");
		}
		printf("\nYour guess is correct.");
		printf("\nDo you want to play game again? (y/n)\n");
	}
	while( getche()=='y');
}
