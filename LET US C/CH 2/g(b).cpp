#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	printf("\nThe character is a capital letter.");
	else if(ch>=97&&ch<=122)
    printf("\nThe character is a lowercase letter.");
    else if(ch>=48&&ch<=57)
    printf("\nThe character is a digit.");
    else if(ch>=0 || ch<48 || ch>57 || ch<65 || ch>90 || ch<97 || ch>122 || ch<=127)
    printf("\nThe character is a special symbol.");
    else
    printf("\nInvalid input.");
}
