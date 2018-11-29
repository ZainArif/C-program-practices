#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter any phrase in lowercase: ");
	while((ch=getch())!='\r')
	{
		ch=ch-32;
		printf("%c",ch);
	}
}
