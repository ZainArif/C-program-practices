#include<stdio.h>
#include<conio.h>
void uc();
void lc();
int main()
{
	uc();
	lc();
}
void uc()
{
	char ch;
	printf("Enter a letter in upper case:");
    ch=getche();
	if(ch>64 && ch<91)
	  ch=ch+32;
	printf("\nYou typed:%c",ch); 
}
void lc()
{
	char ch;
	printf("\nEnter a character in lower case:");
	ch=getche();
	if(ch>96 && ch<120)
	ch=ch-32;
	printf("\nYou typed:%c",ch); 
}
