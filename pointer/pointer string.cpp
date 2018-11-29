#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char ch,line[81],*ptr;
	puts("Enter any sentence to be searched:");
	gets(line);
	printf("\nEnter character to search for:");
	ch=getche();
	ptr=strchr(line,ch);
	printf("\nString starts at address %u",line);
	printf("\nFirst occurence of character is %u",ptr);
	printf("\nThis is position %d",ptr-line);
}
