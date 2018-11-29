#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	scanf("%c",&ch);
	ch=(ch>=97 && ch<=122)? printf("\nLowercase alphabet."):printf("\nNot lowercase alphabet.");
}
