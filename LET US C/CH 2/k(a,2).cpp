#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	scanf("%c",&ch);
	ch=((ch>=0&&ch<=47) || (ch>=58&&ch<=64) || (ch>=91&&ch<=96) || (ch>=123&&ch<=127))? printf("\nSpecial symbol."):printf("\nNot special symbol.");
}
